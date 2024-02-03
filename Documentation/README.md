# Documentation

### Dynamic Memory

- **Use Case**: Allocating memory for resources that require dynamic allocation, such as dynamically creating and managing entities, shaders, or textures during runtime.
- **Example**: Implementing a dynamic memory manager to allocate and deallocate memory for game entities or assets based on the game's requirements.

### Data Structures

- **Use Case**: Storing and organizing game data efficiently, facilitating quick access, retrieval, and manipulation of data elements within the engine.
- **Example**: Implementing data structures like arrays, linked lists, maps, or trees to manage entities, components, shaders, or other engine resources effectively.

### Other Data Types

- **Use Case**: Defining custom data types or structures to represent specific game elements, configurations, or properties within the HecateEngine.
- **Example**: Creating custom data types like `Vector`, `Matrix`, `Color`, or `Material` to encapsulate and manipulate related properties and functionalities.

### Special Members

- **Use Case**: Implementing constructors, destructors, copy/move constructors, assignment operators, and other special member functions to manage object lifecycle, resource allocation, and data integrity within the engine.
- **Example**: Overloading special member functions to ensure proper initialization, cleanup, and management of engine components, entities, or resources.

### Friendship and Inheritance

- **Use Case**: Utilizing friendship and inheritance to establish relationships between classes, facilitating access to protected or private members, and promoting code reuse and extensibility within the engine.
- **Example**: Using inheritance to create base classes like `Engine`, `Actor`, `Component`, or `Renderer`, and deriving specialized classes to extend functionalities or implement specific behaviors. Additionally, leveraging friendship to grant specific classes or functions access to private or protected members for collaboration or optimization purposes.

### Polymorphism

- **Use Case**: Implementing polymorphism to enable objects of different classes to be treated as objects of a common base class, facilitating flexibility, extensibility, and dynamic behavior within the engine.
- **Example**: Defining abstract base classes and pure virtual functions for concepts like `Tickable`, `Renderable`, or `Collidable`, and deriving concrete classes to provide specific implementations or behaviors. Utilizing virtual functions, interfaces, or abstract classes to enable polymorphic behavior, allowing objects to exhibit different forms or behaviors based on their specific types or implementations.
