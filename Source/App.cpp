// Copyright Steve Hughes © 2024

#include "Engine/Engine.h"

#include <iostream>

// This is the entry point of the application
int main()
{
    GEngine* Engine = new GEngine();

    while (Engine->IsValid())
    {
        // Tick engine
    }

    return 0;
}
