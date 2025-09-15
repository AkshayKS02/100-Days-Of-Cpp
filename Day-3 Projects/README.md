# Day 3 - Templates & Generic Programming in C++

## Mini Projects Completed

1. **Template-Based Calculator**
   - Implemented a generic `Calculator<T>` class supporting basic operations: addition, subtraction, multiplication, and division.
   - Created calculator objects for **int**, **float**, and **double** data types.
   - Practiced function templates and exception handling (`runtime_error` for divide-by-zero cases).
   - Extended version includes a **menu-driven, user-interactive calculator** supporting multiple data types.

2. **Generic Stack Implementation**
   - Implemented a stack class template `Stack<T>` with:
     - `Push()`, `Pop()`, `Top()` operations.
     - Checks for stack overflow and underflow.
     - Functions `isEmpty()` and `isFull()` for stack state verification.
   - Tested stack functionality with both **integers** and **characters**.
   - Practiced template classes, exception handling, and static arrays.

3. **Generic Swap Function**
   - Implemented a function template `Swap(T* a, T* b)` to swap values of any data type.
   - Tested with integers, floats, and characters.
   - Reinforced understanding of pointers and templates for reusable code.

## Key Concepts Practiced
- **Function Templates** – Generic functions to avoid code duplication.
- **Class Templates** – Designing reusable data structures and utilities.
- **Exception Handling** – Handling divide-by-zero and invalid stack operations.
- **Menu-Driven Programs** – Creating user-friendly and interactive applications.
- **Stack Implementation** – Practicing LIFO (Last In, First Out) logic using templates.

## Notes / Takeaways
- Templates make code reusable, efficient, and type-independent.
- Exception handling is critical to writing **robust, error-proof programs**.
- Practiced **interactive input handling** with a generic calculator.
- Learned how templates integrate with OOP concepts to build scalable solutions.
