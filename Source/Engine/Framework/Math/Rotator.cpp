// Copyright Steve Hughes © 2024

#include "Rotator.h"

#include "Math.h"
#include "Quaternion.h"
#include "Vector.h"

FRotator::FRotator()
{
}

FRotator::FRotator(float InPitch, float InYaw, float InRoll) :
    Pitch(InPitch),
    Yaw(InYaw),
    Roll(InRoll)
{
}

FRotator::~FRotator() {}

float FRotator::GetPitch() const
{
    return Pitch;
}

float FRotator::GetYaw() const
{
    return Yaw;
}

float FRotator::GetRoll() const
{
    return Roll;
}

void FRotator::SetPitch(float InPitch)
{
    Pitch = InPitch;
}

void FRotator::SetYaw(float InYaw)
{
    Yaw = InYaw;
}

void FRotator::SetRoll(float InRoll)
{
    Roll = InRoll;
}

FRotator FRotator::operator+(const FRotator& Other) const
{
    return FRotator(Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll);
}

FRotator FRotator::operator-(const FRotator& Other) const
{
    return FRotator(Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll);
}

FRotator FRotator::operator*(float Scalar) const
{
    return FRotator(Pitch * Scalar, Yaw * Scalar, Roll * Scalar);
}

FRotator FRotator::FromQuaternion(const FQuaternion& Quaternion)
{
    return Quaternion.ToRotator();
}

FQuaternion FRotator::ToQuaternion() const
{
    float PitchRadians = FMath::DegreesToRadians(Pitch);
    float YawRadians = FMath::DegreesToRadians(Yaw);
    float RollRadians = FMath::DegreesToRadians(Roll);

    float SP = FMath::Sin(PitchRadians * 0.5f);
    float CP = FMath::Cos(PitchRadians * 0.5f);
    float SY = FMath::Sin(YawRadians * 0.5f);
    float CY = FMath::Cos(YawRadians * 0.5f);
    float SR = FMath::Sin(RollRadians * 0.5f);
    float CR = FMath::Cos(RollRadians * 0.5f);

    float X = CR * SP * SY - SR * CP * CY;
    float Y = -CR * SP * CY - SR * CP * SY;
    float Z = CR * CP * SY - SR * SP * CY;
    float W = CR * CP * CY + SR * SP * SY;

    return FQuaternion(X, Y, Z, W);
}

void FRotator::RotateAroundAxis(const FVector& Axis, float Angle)
{
    float AngleRad = FMath::DegreesToRadians(Angle);

    float HalfAngleSin = FMath::Sin(AngleRad * 0.5f);
    float HalfAngleCos = FMath::Cos(AngleRad * 0.5f);

    FQuaternion RotationQuat(Axis.GetX() * HalfAngleSin, Axis.GetY() * HalfAngleSin, Axis.GetZ() * HalfAngleSin, HalfAngleCos);
    FQuaternion VectorQuat(Axis.GetX(), Axis.GetY(), Axis.GetZ(), 0.0f);
    FQuaternion RotatedQuat = RotationQuat * VectorQuat * RotationQuat.GetInverse();

    FVector RotatedVector(RotatedQuat.GetX(), RotatedQuat.GetY(), RotatedQuat.GetZ());

    Pitch = RotatedVector.GetX();
    Yaw = RotatedVector.GetY();
    Roll = RotatedVector.GetZ();
}

FVector FRotator::RotateVector(const FVector& Vector) const
{
    FQuaternion Quaternion = ToQuaternion();
    FQuaternion VectorQuat(Vector.GetX(), Vector.GetY(), Vector.GetZ(), 0.0f);
    FQuaternion RotatedQuat = Quaternion * VectorQuat * Quaternion.GetInverse();

    return FVector(RotatedQuat.GetX(), RotatedQuat.GetY(), RotatedQuat.GetZ());
}

FVector FRotator::GetForwardVector() const
{
    FQuaternion Quaternion = ToQuaternion();
    FQuaternion ForwardQuat(0.0f, 0.0f, 1.0f, 0.0f);
    FQuaternion RotatedQuat = Quaternion * ForwardQuat * Quaternion.GetInverse();

    return FVector(RotatedQuat.GetX(), RotatedQuat.GetY(), RotatedQuat.GetZ()).GetNormalized();
}

FVector FRotator::GetRightVector() const
{
    FQuaternion Quaternion = ToQuaternion();
    FQuaternion RightQuat(1.0f, 0.0f, 0.0f, 0.0f);
    FQuaternion RotatedQuat = Quaternion * RightQuat * Quaternion.GetInverse();

    return FVector(RotatedQuat.GetX(), RotatedQuat.GetY(), RotatedQuat.GetZ()).GetNormalized();
}

FVector FRotator::GetUpVector() const
{
    FQuaternion Quaternion = ToQuaternion();
    FQuaternion UpQuat(0.0f, 1.0f, 0.0f, 0.0f);
    FQuaternion RotatedQuat = Quaternion * UpQuat * Quaternion.GetInverse();

    return FVector(RotatedQuat.GetX(), RotatedQuat.GetY(), RotatedQuat.GetZ()).GetNormalized();
}

std::ostream& operator<<(std::ostream& Out, const FRotator& Rotator)
{
    Out << "(Pitch: " << Rotator.Pitch << ", Yaw: " << Rotator.Yaw << ", Roll: " << Rotator.Roll << ")";
    return Out;
}
