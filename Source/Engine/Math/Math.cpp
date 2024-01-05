// Copyright Steve Hughes © 2024

#include "Math.h"

#include <cmath>
#include <algorithm>

float FMath::Sin(float Value)
{
    return sin(Value);
}

float FMath::Cos(float Value)
{
    return cos(Value);
}

float FMath::Tan(float Value)
{
    return tan(Value);
}

float FMath::Asin(float Value)
{
    return asin(Value);
}

float FMath::Acos(float Value)
{
    return acos(Value);
}

float FMath::Atan(float Value)
{
    return atan(Value);
}

float FMath::Atan2(float Y, float X)
{
    return atan2(Y, X);
}

float FMath::Sqrt(float Value)
{
    return sqrt(Value);
}

float FMath::Pow(float Base, float Exponent)
{
    return pow(Base, Exponent);
}

float FMath::Exp(float Exponent)
{
    return exp(Exponent);
}

float FMath::Abs(float Value)
{
    return abs(Value);
}

float FMath::Log(float Value)
{
    return log(Value);
}

float FMath::Log10(float Value)
{
    return log10(Value);
}

float FMath::Fmod(float Value, float Modulus)
{
    return fmod(Value, Modulus);
}

float FMath::Floor(float Value)
{
    return floor(Value);
}

float FMath::Ceil(float Value)
{
    return ceil(Value);
}

float FMath::Round(float Value)
{
    return round(Value);
}

float FMath::Min(float A, float B)
{
    return std::min(A, B);
}

float FMath::Max(float A, float B)
{
    return std::max(A, B);
}

float FMath::Clamp(float Value, float Min, float Max)
{
    return (Value < Min) ? Min : (Min < Value) ? Min : Value;
}

float FMath::Lerp(float A, float B, float Alpha)
{
    return A + (B - A) * Alpha;
}

float FMath::LerpClamped(float A, float B, float Alpha)
{
    return Lerp(A, B, Clamp(Alpha, 0.0f, 1.0f));
}

float FMath::DegreesToRadians(float Degrees)
{
    return Degrees * (PI / 180.0f);
}

float FMath::RadiansToDegrees(float Radians)
{
    return Radians * (180.0f / PI);
}