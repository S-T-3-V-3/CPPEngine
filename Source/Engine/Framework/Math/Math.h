// Copyright Steve Hughes © 2024

#pragma once

#define PI 3.14159265358979323846f

namespace FMath
{
    float Sin(float Value);
    float Cos(float Value);
    float Tan(float Value);

    float Asin(float Value);
    float Acos(float Value);
    float Atan(float Value);
    float Atan2(float Y, float X);

    float Sqrt(float Value);
    float Pow(float Base, float Exponent);
    float Exp(float Exponent);
    float Abs(float Value);

    float Log(float Value);
    float Log10(float Value);

    float Fmod(float Value, float Modulus);
    float Floor(float Value);
    float Ceil(float Value);
    float Round(float Value);

    float Min(float A, float B);
    float Max(float A, float B);

    float Clamp(float Value, float Min, float Max);
    float Lerp(float A, float B, float Alpha);
    float LerpClamped(float A, float B, float Alpha);

    float DegreesToRadians(float Degrees);
    float RadiansToDegrees(float Radians);
} // namespace FMath
