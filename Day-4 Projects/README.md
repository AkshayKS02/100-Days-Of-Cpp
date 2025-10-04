# Day 4 – STL Algorithms & List Management in C++

## Mini Projects Completed

### GPA Analyzer Program
- Implemented a program to manage student GPA data using **`std::vector`** and STL algorithms.
- Program features include:
  - Input of GPA for multiple students.
  - Calculating **sum** and **average** of GPA scores.
  - Finding **maximum** and **minimum** GPA.
  - Sorting and displaying GPA values in ascending order.
- Practiced:
  - **Vectors** and dynamic arrays.
  - **STL algorithms**: `accumulate()`, `max_element()`, `min_element()`, `sort()`.
  - **Formatted output** using `iomanip` for fixed precision.

---

### Playlist Manager
- Implemented a **dynamic playlist manager** using **`std::list<string>`**.
- Program features include:
  - Add songs to **front**, **back**, or a **specific position** in the playlist.
  - Remove songs from **front** or **back**.
  - Display all songs in current order.
  - Sort playlist **alphabetically**.
  - Clear the entire playlist.
- Practiced:
  - **Doubly-linked list operations** with `std::list`.
  - **Dynamic insertion and deletion** at any position.
  - Menu-driven, interactive program design.
  - Input handling for **multi-word song names** with `getline()`.

---

## Key Concepts Practiced
- **STL Containers:** `vector` and `list` for dynamic data management.
- **STL Algorithms:** Using `accumulate()`, `sort()`, `max_element()`, and `min_element()`.
- **Iterators:** Navigating and manipulating dynamic containers.
- **Menu-Driven Programming:** Building user-interactive applications.
- **Dynamic Data Structures:** Understanding when to use vector vs list.
- **Formatted Output:** Using `iomanip` to display numeric data precisely.

---

## Takeaways
- Vectors are ideal for numeric data and random access; lists are better for frequent insertions/deletions.
- STL algorithms simplify computation and reduce boilerplate code.
- Iterators are essential for working with dynamic containers like lists.
- Menu-driven programs improve user interaction and usability.
- Combining STL containers and algorithms allows solving real-world problems efficiently.
- Practiced building scalable and interactive programs using C++ STL features.
