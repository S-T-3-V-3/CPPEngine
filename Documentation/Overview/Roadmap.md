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
  - [ ] GEditor (Launches an editor window to modify a given GApp)
  - [ ] GApp (Per application, we want a config file pointing to its directory, name etc)
  - [ ] GLauncher (Launches starting window with options to launch Editor or Apps)
- [ ] Integrate extension classes for dual inheritance
  - [ ] XTickable
  - [ ] XCollidable
  - [ ] XRenderable
  - [ ] XTask (Runs asynchronously on own thread)
- [ ] Create foundational classes and structures
  - [x] FString
  - [x] FVector
  - [x] FRotator
  - [x] FTransform
  - [x] FMatrix
  - [ ] FColor
  - [ ] FMaterial
  - [ ] FPrimitive
  - [ ] FDelegate
- [ ] Implement basic physics and collision
  - [ ] FCollision
  - [ ] FCollision2D
- [ ] Advanced Rendering Techniques (Shaders, Lighting, etc.)
- [ ] User Interface Development (NOESIS GUI?)
- [ ] XTask Manager

### Entity Development: [Entities](/Documentation/Engine/Entities/README.md)
- [ ] Define entity classes
  - [ ] NActor
  - [ ] NComponent
  - [ ] NParticleSystem
  - [ ] NCamera
  - [ ] NLight
  - [ ] NAudio
- [ ] Implement entity management on GEngine
    - [ ] Track all entities and tickable objects (Tree? LinkedList?)
- [ ] Global physics engine and collision management

## Game Development: [Game](/Documentation/Game/README.md)
- [ ] Plugging in game-specific code
- [ ] Implement game-specific entities
- [ ] Build release versions of engine to reference from Apps