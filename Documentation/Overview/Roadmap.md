# CPPEngine Roadmap

## Overview

This roadmap outlines the planned features for the CPPEngine project.

### Documentation: [Documentation](/Documentation/README.md)
- [x] Set up project structure
- [x] Set up documentation
    - [x] Naming Conventions
    - [x] Changelog
    - [x] Roadmap
    - [ ] Git Conventions
        - [ ] Branch Names
    - [-] Project Setup (/Documentation/Setup/)
        - [x] VSCode
        - [ ] Visual Studio
        - [ ] Rider
    - [ ] Project Structure
        - [ ] Engine
        - [ ] Game
        - [ ] ThirdParty
        - [ ] Documentation
        - [ ] Build
    - [ ] Engine Feature Documentation
      - [ ] Globals
        - [ ] GEngine
        - [ ] GRenderer
        - [ ] GConfig
        - [ ] GLog
      - [ ] Framework
        - [ ] FString
        - [ ] FVector
        - [ ] FRotator
        - [ ] FTransform
        - [ ] FMatrix
        - [ ] FColor
        - [ ] FMaterial
        - [ ] FPrimitive
        - [ ] FCollision
        - [ ] FCollision2D
      - [ ] Entities
        - [ ] NActor
        - [ ] NComponent
        - [ ] NParticleSystem
        - [ ] NCamera
        - [ ] NLight
        - [ ] NAudio
      - [ ] Xtensions
        - [ ] XTickable
    - [ ] Build System
      - [ ] Mac
      - [ ] Windows
      - [ ] Linux

### Core Engine Development: [Engine](/Documentation/Engine/README.md)
- [ ] Implement basic OpenGL rendering
  - [ ] GRenderer
- [ ] Implement core engine functionalities
  - [ ] GEngine
  - [ ] GConfig
  - [ ] GLog
- [ ] Integrate extension classes for dual inheritance
  - [ ] XTickable
- [ ] Create foundational classes and structures
  - [x] FString
  - [x] FVector
  - [x] FRotator
  - [x] FTransform
  - [x] FMatrix
  - [ ] FColor
  - [ ] FMaterial
  - [ ] FPrimitive
- [ ] Implement basic physics and collision
  - [ ] FCollision
  - [ ] FCollision2D
- [ ] Advanced Rendering Techniques (Shaders, Lighting, etc.)
- [ ] User Interface Development

### Entity Development: [Entities](/Documentation/Engine/Entities/README.md)
- [ ] Define entity classes
  - [ ] NActor
  - [ ] NComponent
  - [ ] NParticleSystem
  - [ ] NCamera
  - [ ] NLight
  - [ ] NAudio
- [ ] Implement entity management

## Game Development: [Game](/Documentation/Game/README.md)
- [ ] Plugging in game-specific code
- [ ] Implement game-specific entities