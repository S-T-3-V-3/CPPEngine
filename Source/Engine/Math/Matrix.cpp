// Copyright Steve Hughes © 2024

#include "Matrix.h"

#include "Core.h"

FMatrix::FMatrix()
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            Elements[i][j] = (i == j) ? 1.0f : 0.0f;
        }
    }
}

FMatrix::~FMatrix()
{
}

FMatrix FMatrix::operator*(const FMatrix& Other) const
{
    FMatrix Result;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            Result.Elements[i][j] = 0.0f;
            for (int k = 0; k < 4; ++k)
            {
                Result.Elements[i][j] += Elements[i][k] * Other.Elements[k][j];
            }
        }
    }
    return Result;
}

FMatrix FMatrix::CreateTranslationMatrix(const FVector& Translation)
{
    FMatrix Result;
    Result.SetElement(0, 3, Translation.X);
    Result.SetElement(1, 3, Translation.Y);
    Result.SetElement(2, 3, Translation.Z);
    return Result;
}

FMatrix FMatrix::CreateRotationMatrix(const FRotator& Rotation)
{
    float CosYaw = cosf(Rotation.Yaw);
    float SinYaw = sinf(Rotation.Yaw);
    float CosPitch = cosf(Rotation.Pitch);
    float SinPitch = sinf(Rotation.Pitch);
    float CosRoll = cosf(Rotation.Roll);
    float SinRoll = sinf(Rotation.Roll);

    FMatrix Result;
    Result.SetElement(0, 0, CosYaw * CosPitch);
    Result.SetElement(0, 1, CosYaw * SinPitch * SinRoll - SinYaw * CosRoll);
    Result.SetElement(0, 2, CosYaw * SinPitch * CosRoll + SinYaw * SinRoll);

    Result.SetElement(1, 0, SinYaw * CosPitch);
    Result.SetElement(1, 1, SinYaw * SinPitch * SinRoll + CosYaw * CosRoll);
    Result.SetElement(1, 2, SinYaw * SinPitch * CosRoll - CosYaw * SinRoll);

    Result.SetElement(2, 0, -SinPitch);
    Result.SetElement(2, 1, CosPitch * SinRoll);
    Result.SetElement(2, 2, CosPitch * CosRoll);

    return Result;
}

FMatrix FMatrix::CreateScaleMatrix(const FVector& Scale)
{
    FMatrix Result;
    Result.SetElement(0, 0, Scale.X);
    Result.SetElement(1, 1, Scale.Y);
    Result.SetElement(2, 2, Scale.Z);
    return Result;
}

float FMatrix::GetElement(int Row, int Col) const
{
    return Elements[Row][Col];
}

void FMatrix::SetElement(int Row, int Col, float Value)
{
    Elements[Row][Col] = Value;
}

FVector FMatrix::TransformVector(const FVector& Vector) const
{
    FVector Result;
    Result.X = Elements[0][0] * Vector.X + Elements[0][1] * Vector.Y + Elements[0][2] * Vector.Z;
    Result.Y = Elements[1][0] * Vector.X + Elements[1][1] * Vector.Y + Elements[1][2] * Vector.Z;
    Result.Z = Elements[2][0] * Vector.X + Elements[2][1] * Vector.Y + Elements[2][2] * Vector.Z;
    return Result;
}

FTransform FMatrix::Decompose() const
{
    FVector Translation;
    FVector Scale;
    FRotator Rotation;

    Translation.X = Elements[0][3];
    Translation.Y = Elements[1][3];
    Translation.Z = Elements[2][3];

    Scale.X = FVector(Elements[0][0], Elements[0][1], Elements[0][2]).GetLength();
    Scale.Y = FVector(Elements[1][0], Elements[1][1], Elements[1][2]).GetLength();
    Scale.Z = FVector(Elements[2][0], Elements[2][1], Elements[2][2]).GetLength();

    Rotation.Pitch = atan2f(-Elements[2][1], Elements[2][2]) * (180.0f / PI);
    Rotation.Yaw = atan2f(Elements[2][0], sqrtf(Elements[2][1] * Elements[2][1] + Elements[2][2] * Elements[2][2])) * (180.0f / PI);
    Rotation.Roll = atan2f(Elements[1][0], Elements[0][0]) * (180.0f / PI);

    return FTransform(Translation, Rotation, Scale);
}

FVector operator*(const FMatrix& Matrix, const FVector& Vector)
{
    FVector Result = Matrix.TransformVector(Vector);
    return Result;
}

FMatrix operator*(float Scalar, const FMatrix& Matrix)
{
    FMatrix Result;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            Result.Elements[i][j] = Scalar * Matrix.Elements[i][j];
        }
    }
    return Result;
}
