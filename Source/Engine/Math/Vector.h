// Copyright Steve Hughes © 2024

#pragma once

#include <iostream>

class FMatrix;

class FVector
{
    friend FMatrix;

private:
    float X = 0;
    float Y = 0;
    float Z = 0;

public:
    FVector();
    FVector(float InX, float InY, float InZ);
    ~FVector();

    float GetX() const;
    float GetY() const;
    float GetZ() const;

    void SetX(float InX);
    void SetY(float InY);
    void SetZ(float InZ);

    FVector operator+(const FVector& Other) const;
    FVector operator-(const FVector& Other) const;
    FVector operator*(FVector Other) const;
    FVector operator/(FVector Other) const;

    FVector operator*(float Scalar) const;
    FVector operator/(float Scalar) const;

    float GetLength() const;
    FVector GetNormalized() const;

    void Normalize();

    friend std::ostream& operator<<(std::ostream& Out, const FVector& Vector);
};
