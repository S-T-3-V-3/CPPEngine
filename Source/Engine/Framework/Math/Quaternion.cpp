// Copyright Steve Hughes © 2024

#include "Quaternion.h"

#include "Math.h"
#include "Rotator.h"

FQuaternion::FQuaternion()
{
}

FQuaternion::FQuaternion(float InX, float InY, float InZ, float InW) :
    X(InX),
    Y(InY),
    Z(InZ),
    W(InW)
{
}

FQuaternion::~FQuaternion()
{
}

float FQuaternion::GetX() const
{
    return X;
}

float FQuaternion::GetY() const
{
    return Y;
}

float FQuaternion::GetZ() const
{
    return Z;
}

float FQuaternion::GetW() const
{
    return W;
}


void FQuaternion::SetX(float InX)
{
    X = InX;
}

void FQuaternion::SetY(float InY)
{
    Y = InY;
}

void FQuaternion::SetZ(float InZ)
{
    Z = InZ;
}

void FQuaternion::SetW(float InW)
{
    W = InW;
}

FQuaternion FQuaternion::operator*(const FQuaternion& Other) const
{
    float ResultX = W * Other.X + X * Other.W + Y * Other.Z - Z * Other.Y;
    float ResultY = W * Other.Y - X * Other.Z + Y * Other.W + Z * Other.X;
    float ResultZ = W * Other.Z + X * Other.Y - Y * Other.X + Z * Other.W;
    float ResultW = W * Other.W - X * Other.X - Y * Other.Y - Z * Other.Z;

    return FQuaternion(ResultX, ResultY, ResultZ, ResultW);
}

FQuaternion FQuaternion::GetInverse() const
{
    return FQuaternion(-X, -Y, -Z, W);
}

FQuaternion FQuaternion::FromRotator(const FRotator& Rotator)
{
    return Rotator.ToQuaternion();
}

FRotator FQuaternion::ToRotator() const
{
    float Pitch = FMath::RadiansToDegrees(FMath::Atan2(2.0f * (W * X + Y * Z), 1.0f - 2.0f * (X * X + Y * Y)));
    float Yaw = FMath::RadiansToDegrees(FMath::Asin(2.0f * (W * Y - Z * X)));
    float Roll = FMath::RadiansToDegrees(FMath::Atan2(2.0f * (W * Z + X * Y), 1.0f - 2.0f * (Y * Y + Z * Z)));

    return FRotator(Pitch, Yaw, Roll);
}

std::ostream& operator<<(std::ostream& Out, const FQuaternion& Quaternion)
{
    Out << "(X: " << Quaternion.X << ", Y: " << Quaternion.Y << ", Z: " << Quaternion.Z << ", W: " << Quaternion.W << ")";
    return Out;
}
