// Copyright Steve Hughes © 2024

#pragma once

#include <iostream>

class FString
{
private:
    char* Data;
    size_t Length;

public:
    FString();
    FString(const char* String);
    FString(const FString& Other);
    ~FString();

    FString& operator=(const FString& Other);

    FString operator+(const FString& Other) const;

    size_t GetLength() const;
    const char* ToCString() const;

    friend std::ostream& operator<<(std::ostream& Out, const FString& String);
};
