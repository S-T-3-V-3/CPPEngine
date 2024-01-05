// Copyright Steve Hughes © 2024

#include "Vector.h"

#include "Rotator.h"

FVector::FVector()
{
}

FVector::FVector(float InX, float InY, float InZ) :
    X(InX),
    Y(InY),
    Z(InZ)
{
}

FVector::~FVector()
{
}

float FVector::GetX() const
{
    return X;
}

float FVector::GetY() const
{
    return Y;
}

float FVector::GetZ() const
{
    return Z;
}

void FVector::SetX(float InX)
{
    X = InX;
}
void FVector::SetY(float InY)
{
    Y = InY;
}
void FVector::SetZ(float InZ)
{
    Z = InZ;
}

FVector FVector::operator+(const FVector& Other) const
{
    return FVector(X + Other.X, Y + Other.Y, Z + Other.Z);
}

FVector FVector::operator-(const FVector& Other) const
{
    return FVector(X - Other.X, Y - Other.Y, Z - Other.Z);
}

FVector FVector::operator*(FVector Other) const
{
    return FVector(X * Other.X, Y * Other.Y, Z * Other.Z);
}

FVector FVector::operator/(FVector Other) const
{
    if (Other.X != 0.0f && Other.Y != 0.0f && Other.Z != 0.0f)
    {
        return FVector(X / Other.X, Y / Other.Y, Z / Other.Z);
    }

    return *this;
}

FVector FVector::operator*(float Scalar) const
{
    return FVector(X * Scalar, Y * Scalar, Z * Scalar);
}

FVector FVector::operator/(float Scalar) const
{
    if (Scalar != 0.0f)
    {
        return FVector(X / Scalar, Y / Scalar, Z / Scalar);
    }
    return *this;
}

float FVector::GetLength() const
{
    return sqrtf(X * X + Y * Y + Z * Z);
}

FVector FVector::GetNormalized() const
{
    float Length = GetLength();
    if (Length != 0.0f)
    {
        return FVector(X / Length, Y / Length, Z / Length);
    }

    return *this;
}

void FVector::Normalize()
{
    float Length = GetLength();
    if (Length != 0.0f)
    {
        X /= Length;
        Y /= Length;
        Z /= Length;
    }
}

std::ostream& operator<<(std::ostream& Out, const FVector& Vector)
{
    Out << "(" << Vector.X << ", " << Vector.Y << ", " << Vector.Z << ")";
    return Out;
}
