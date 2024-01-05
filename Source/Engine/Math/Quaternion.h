// Copyright Steve Hughes © 2024

#pragma once

#include <iostream>

class FMatrix;

class FQuaternion
{
    friend FMatrix;

private:
    float X = 0.0f;
    float Y = 0.0f;
    float Z = 0.0f;
    float W = 1.0f;

public:
    FQuaternion();
    FQuaternion(float InX, float InY, float InZ, float InW);
    ~FQuaternion();

    float GetX() const;
    float GetY() const;
    float GetZ() const;
    float GetW() const;

    void SetX(float InX);
    void SetY(float InY);
    void SetZ(float InZ);
    void SetW(float InW);

    FQuaternion operator*(const FQuaternion& Other) const;

    FQuaternion GetInverse() const;

    FQuaternion FromRotator(const class FRotator& Rotator);
    class FRotator ToRotator() const;

    friend std::ostream& operator<<(std::ostream& Out, const FQuaternion& Quaternion);
};
