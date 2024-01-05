// Copyright Steve Hughes © 2024

#pragma once

#include <iostream>
#include <cmath>

class FMatrix;
class FQuaternion;

class FRotator
{
    friend FMatrix;
    friend FQuaternion;

private:
    float Pitch = 0.0f;
    float Yaw = 0.0f;
    float Roll = 0.0f;

public:
    FRotator();
    FRotator(float InPitch, float InYaw, float InRoll);
    ~FRotator();

    float GetPitch() const;
    float GetYaw() const;
    float GetRoll() const;

    void SetPitch(float InPitch);
    void SetYaw(float InYaw);
    void SetRoll(float InRoll);

    FRotator operator+(const FRotator& Other) const;
    FRotator operator-(const FRotator& Other) const;
    FRotator operator*(float Scalar) const;

    FRotator FromQuaternion(const class FQuaternion& Quaternion);
    class FQuaternion ToQuaternion() const;

    void RotateAroundAxis(const class FVector& Axis, float Angle);

    FVector RotateVector(const FVector& Vector) const;
    FVector GetForwardVector() const;
    FVector GetRightVector() const;
    FVector GetUpVector() const;

    friend std::ostream& operator<<(std::ostream& Out, const FRotator& Rotator);
};
