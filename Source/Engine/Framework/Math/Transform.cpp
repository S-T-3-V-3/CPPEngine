// Copyright Steve Hughes © 2024

#include "Transform.h"

#include "Vector.h"
#include "Rotator.h"

FTransform::FTransform() :
    Translation(nullptr),
    Rotation(nullptr),
    Scale(nullptr)
{
}

FTransform::FTransform(const FVector& InTranslation, const FRotator& InRotation, const FVector& InScale)
{
    Translation = new FVector(InTranslation);
    Rotation = new FRotator(InRotation);
    Scale = new FVector(InScale);
}

FTransform::~FTransform()
{
    delete Translation;
    delete Rotation;
    delete Scale;
}

const FVector& FTransform::GetTranslation() const
{
    return *Translation;
}

const FRotator& FTransform::GetRotation() const
{
    return *Rotation;
}

const FVector& FTransform::GetScale() const
{
    return *Scale;
}

void FTransform::SetTranslation(const FVector& InTranslation)
{
    *Translation = InTranslation;
}

void FTransform::SetRotation(const FRotator& InRotation)
{
    *Rotation = InRotation;
}

void FTransform::SetScale(const FVector& InScale)
{
    *Scale = InScale;
}

FTransform FTransform::operator*(const FTransform& Other) const
{
    return FTransform(
        *Translation + Other.GetTranslation(),
        *Rotation + Other.GetRotation(),
        *Scale + Other.GetScale()
    );
}

void FTransform::Translate(const FVector& Delta)
{
    *Translation = *Translation + Delta;
}

void FTransform::Rotate(const FRotator& Delta)
{
    *Rotation = *Rotation + Delta;
}

void FTransform::ScaleBy(const FVector& Delta)
{
    *Scale = *Scale * Delta;
}
