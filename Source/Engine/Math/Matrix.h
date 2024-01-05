// Copyright Steve Hughes © 2024

#pragma once

class FVector;
class FRotator;
class FTransform;

class FMatrix
{
private:
    float Elements[4][4];

public:
    FMatrix();
    ~FMatrix();

    FMatrix operator*(const FMatrix& Other) const;

    static FMatrix CreateTranslationMatrix(const FVector& Translation);
    static FMatrix CreateRotationMatrix(const FRotator& Rotation);
    static FMatrix CreateScaleMatrix(const FVector& Scale);

    float GetElement(int Row, int Col) const;
    void SetElement(int Row, int Col, float Value);

    FVector TransformVector(const FVector& Vector) const;
    FTransform Decompose() const;

    friend FVector operator*(const FMatrix& Matrix, const FVector& Vector);
    friend FMatrix operator*(float Scalar, const FMatrix& Matrix);
};
