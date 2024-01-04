# CPPEngine Naming Conventions

## Introduction

This document outlines the naming conventions adopted for the CPPEngine project to maintain consistency and clarity across the codebase. The chosen prefixes help categorize classes based on their roles, functionalities, or categories within the engine.

## Prefix Definitions

### F - Framework

The `F` prefix is used for classes related to the engine's core framework or foundational elements. Classes with the `F` prefix represent core functionalities or fundamental building blocks of the CPPEngine.

**Examples:**
- `FEngine`: Core engine class
- `FVector`: Vector math class
- `FString`: String manipulation class

### G - Globals

The `G` prefix is reserved for global variables or singleton instances that provide global access points within the CPPEngine. Global instances with the `G` prefix allow access to various engine functionalities, settings, or systems.

**Examples:**
- `GEngine`: Global engine instance providing engine functionalities
- `GConfig`: Global configuration manager instance

### E - Entities

The `E` prefix is used for classes related to entities within the CPPEngine. Entities represent objects or components that exist within the game or simulation environment managed by the engine.

**Examples:**
- `EActor`: Entity representing an actor within the game world
- `EComponent`: Entity representing a component within an actor
- `EParticleSystem`: Entity representing a particle system within the engine

### I - Interfaces

The `I` prefix is used for interface classes within the CPPEngine. Interfaces define contracts or specifications that classes must implement, ensuring consistency and adherence to specific behaviors or functionalities.

**Examples:**
- `IInputHandler`: Interface defining input handling methods
- `ILogger`: Interface defining logging functionalities
- `ISystem`: Interface defining system management operations

### X - Extensions

The `X` prefix is used for classes that serve as extensions or mixin classes intended for dual inheritance. These classes provide additional functionalities or default implementations that can be added to base-level entities or other classes within the CPPEngine.

**Examples:**
- `XTickable`: Extension class providing tick functionality with default implementations
- `XSerializable`: Extension class providing serialization functionalities
- `XCollidable`: Extension class providing collision detection and handling methods

## Conclusion

By adhering to these naming conventions and prefixes (F, G, E, I, X), the CPPEngine project maintains a structured and organized codebase, facilitating readability, maintainability, and scalability as the engine evolves and grows.
