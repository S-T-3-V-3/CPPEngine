// Copyright Steve Hughes © 2024

#include "Engine.h"

#include "Framework/Math/Core.h"
#include <iostream>

GEngine::GEngine()
{
    std::cout << "Engine initialized" << std::endl;
}

bool GEngine::IsValid()
{
    return true;
}