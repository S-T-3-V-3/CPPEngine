// Copyright Steve Hughes © 2024

#pragma once

class FVector;
class FRotator;
class FMatrix;

class FTransform
{
    friend FMatrix;

private:
    FVector* Translation;
    FRotator* Rotation;
    FVector* Scale;

public:
    FTransform();
    FTransform(const FVector& InTranslation, const FRotator& InRotation, const FVector& InScale);
    ~FTransform();

    const FVector& GetTranslation() const;
    const FRotator& GetRotation() const;
    const FVector& GetScale() const;

    void SetTranslation(const FVector& InTranslation);
    void SetRotation(const FRotator& InRotation);
    void SetScale(const FVector& InScale);

    FTransform operator*(const FTransform& Other) const;

    void Translate(const FVector& Delta);
    void Rotate(const FRotator& Delta);
    void ScaleBy(const FVector& Delta);
};
