// Copyright Steve Hughes © 2024

#include "Vector2D.h"

FVector2D::FVector2D()
{
}

FVector2D::FVector2D(float InX, float InY) :
    X(InX),
    Y(InY)
{
}

FVector2D::~FVector2D()
{
}

float FVector2D::GetX() const { return X; }
float FVector2D::GetY() const { return Y; }

void FVector2D::SetX(float InX) { X = InX; }
void FVector2D::SetY(float InY) { Y = InY; }

FVector2D FVector2D::operator+(const FVector2D& Other) const
{
    return FVector2D(X + Other.X, Y + Other.Y);
}

FVector2D FVector2D::operator-(const FVector2D& Other) const
{
    return FVector2D(X - Other.X, Y - Other.Y);
}

FVector2D FVector2D::operator*(float Scalar) const
{
    return FVector2D(X * Scalar, Y * Scalar);
}

FVector2D FVector2D::operator/(float Scalar) const
{
    if (Scalar != 0.0f)
    {
        return FVector2D(X / Scalar, Y / Scalar);
    }
    return *this;
}

float FVector2D::GetLength() const
{
    return std::sqrt(X * X + Y * Y);
}

FVector2D FVector2D::GetNormalized() const
{
    float Length = GetLength();
    if (Length != 0.0f)
    {
        return FVector2D(X / Length, Y / Length);
    }
    return *this;
}

void FVector2D::Normalize()
{
    float Length = GetLength();
    if (Length != 0.0f)
    {
        X /= Length;
        Y /= Length;
    }
}

std::ostream& operator<<(std::ostream& Out, const FVector2D& Vector)
{
    Out << "(" << Vector.X << ", " << Vector.Y << ")";
    return Out;
}
