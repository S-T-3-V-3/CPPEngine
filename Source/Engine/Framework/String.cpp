// Copyright Steve Hughes © 2024

#include "String.h"
#include <cstring>

FString::FString()
{
    Data = nullptr;
    Length = 0;
}

FString::FString(const char* String) : Length(strlen(String))
{
    Data = new char[Length + 1];
    strcpy(Data, String);
}

FString::FString(const FString& Other) : Length(Other.Length)
{
    Data = new char[Length + 1];
    strcpy(Data, Other.Data);
}

FString::~FString()
{
    delete[] Data;
}

FString& FString::operator=(const FString& Other)
{
    if (this != &Other)
    {
        delete[] Data;
        Length = Other.Length;
        Data = new char[Length + 1];
        strcpy(Data, Other.Data);
    }
    return *this;
}

FString FString::operator+(const FString& Other) const
{
    FString NewString;
    NewString.Length = Length + Other.Length;
    NewString.Data = new char[NewString.Length + 1];
    strcpy(NewString.Data, Data);
    strcat(NewString.Data, Other.Data);
    return NewString;
}

size_t FString::GetLength() const
{
    return Length;
}

const char* FString::ToCString() const
{
    return Data;
}

std::ostream& operator<<(std::ostream& Out, const FString& String)
{
    Out << String.Data;
    return Out;
}
