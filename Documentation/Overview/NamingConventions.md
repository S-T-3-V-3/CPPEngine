# HecateEngine Naming Conventions

## Introduction

This document outlines the naming conventions adopted for the HecateEngine project to maintain consistency and clarity across the codebase. The chosen prefixes help categorize classes based on their roles, functionalities, or categories within the engine.

## Prefix Definitions

### F - Framework

The `F` prefix is used for classes related to the engine's core framework or foundational elements. Classes with the `F` prefix represent core functionalities or fundamental building blocks of the HecateEngine.

**Examples:**
- `FString`: String manipulation class
- `FVector`: Vector math class
- `FRotator`: Rotation math class
- `FTransform`: Transformation math class
- `FMatrix`: Matrix math class
- `FColor`: Color class
- `FPrimitive`: Primitive shape class
- `FCollision`: Collision handling class

### G - Globals

The `G` prefix is reserved for global variables or singleton instances that provide global access points within the HecateEngine. Global instances with the `G` prefix allow access to various engine functionalities, settings, or systems.

**Examples:**
- `GEngine`: Global engine instance providing engine functionalities
- `GRenderer`: Global renderer instance providing rendering functionalities
- `GConfig`: Global configuration manager instance
- `GLog`: Global logger instance

### E - Enumerators

The `E` prefix is used for enumerators within the HecateEngine. Enumerators are used to define a set of named constants, providing a more readable alternative to integer values.

**Examples:**
- `EPrimitiveType`: Enumerator defining primitive types
- `EComponentType`: Enumerator defining component types

### N - ENtities

The `N` prefix is used for classes related to entities within the HecateEngine. Entities represent objects or components that exist within the game or simulation environment managed by the engine. All Entities are registered with the engine system when created.

**Examples:**
- `NActor`: Entity representing an actor within the game world
- `NPrefab`: Entity representing a prefab within the engine (A collection of Actors)
- `NComponent`: Entity representing a component within an actor
- `NParticleSystem`: Entity representing a particle system within the engine

### I - Interfaces

The `I` prefix is used for interface classes within the HecateEngine. Interfaces define contracts or specifications that classes must implement, ensuring consistency and adherence to specific behaviors or functionalities.

**Examples:**
- `IInputHandler`: Interface defining input handling methods
- `ICollisionHandler`: Interface defining collision handling methods

### X - Extensions

The `X` prefix is used for classes that serve as extensions and classes intended for dual inheritance. These classes provide additional functionalities and default implementations that can be added to base-level entities or other classes within the HecateEngine, without strongly defining a new category.

**Examples:**
- `XTickable`: Extension class providing tick functionality with default implementations
- `XSerializable`: Extension class providing serialization functionalities

## Conclusion

By adhering to these naming conventions and prefixes (F, G, E, N, I, X), the HecateEngine project maintains a structured and organized codebase, facilitating readability, maintainability, and scalability as the engine evolves and grows.
