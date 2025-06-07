# Java Notes

## Links

- []()

---

## Notes

- **What is Java?** Java is a high-level, object-oriented programming language developed by Sun Microsystems in 1995. It is platform-independent, which means we can write code once and run it anywhere using the Java Virtual Machine (JVM). Java is mostly used for building desktop applications, web applications, Android apps, and enterprise systems.

### Java data types

![Data Types in Java]('../res/Data Types in java.png')

- **String** is not primitive data type like `int`, `char`... (because only class can have methods. Primitive can not)

### Java Type Casting

- Type casting is when you assign a value of one primitive data type to another type.
- In Java, there are two types of casting:
  - _Widening Casting (automatically)_ - converting a smaller type to a larger type size
    byte -> short -> char -> int -> long -> float -> double
  - _Narrowing Casting (manually)_ - converting a larger type to a smaller size type
    double -> float -> long -> int -> char -> short -> byte

### Java Interfaces

- Properties use `UPPER_SNAKE_CASE` by convention
- Value must be set immediately and cannot be changed
- Properties are `public static final` behind the scenes
- Interfaces are typically used to house methods
- The methods are `abstract` by default without code implementation
- Interfaces can have concrete methods that have code implementation
- All abstract methods must be implemented in the subclass
