// Copyright Steve Hughes © 2024

#pragma once

#include <iostream>
#include <cmath>

class FVector2D
{
private:
    float X = 0;
    float Y = 0;

public:
    FVector2D();
    FVector2D(float InX, float InY);
    ~FVector2D();

    float GetX() const;
    float GetY() const;

    void SetX(float InX);
    void SetY(float InY);

    FVector2D operator+(const FVector2D& Other) const;
    FVector2D operator-(const FVector2D& Other) const;
    FVector2D operator*(float Scalar) const;
    FVector2D operator/(float Scalar) const;

    float GetLength() const;
    FVector2D GetNormalized() const;

    void Normalize();

    friend std::ostream& operator<<(std::ostream& Out, const FVector2D& Vector);
};
