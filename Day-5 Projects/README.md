# Day 5 - STL & Advanced OOP Practice

## Mini Projects Completed

1. **Character Frequency Counter**
   - Used a `map<char,int>` to count the frequency of each character in a user-input sentence.
   - Practiced iterating over `std::map` and using `getline` for string input.
   - Learned about automatic key initialization in maps when accessed with `[]`.

2. **Integer Frequency Counter**
   - Used `map<int,int>` to count the frequency of numbers entered by the user.
   - Practiced using `while` loops, `map` insertion, and iterating over key-value pairs.
   - Reinforced understanding of counting elements efficiently with STL containers.

3. **Set for Sorted Unique Numbers**
   - Used `set<int>` to store numbers in sorted order automatically while removing duplicates.
   - Practiced inserting elements and iterating over a set using range-based loops.
   - Learned the property of automatic sorting in `std::set`.

4. **Multiset for Finding Duplicates**
   - Used `multiset<int>` to allow duplicates and identify repeated numbers.
   - Practiced iterating over multisets and detecting duplicates efficiently.
   - Learned the difference between `set` and `multiset` in STL.

5. **Student Records with Map and Vector**
   - Used `map<int, vector<string>>` to store multiple subjects for each student.
   - Practiced nested STL containers, adding elements to vectors, and iterating over them.
   - Learned to handle structured data in C++ efficiently.

6. **Comprehensive Staff and Student Management System**
   - Implemented **abstract class `Person`** with pure virtual function `display()`.
   - Created **`Student`** and **`Staff`** classes inheriting from `Person`.
   - Used **friend operator `<<`** for printing person details.
   - Practiced:
     - Exception handling with custom `PersonException`.
     - Static members to track unique roll numbers and employee IDs.
     - `set` and `map` to manage enrolled subjects and courses.
     - Dynamic memory with `vector<Person*>` to store polymorphic objects.
   - Built a mini console-based management system for adding and displaying students and staff.

## Key Concepts Practiced
- **STL Containers:** `map`, `set`, `multiset`, `vector`.
- **Nested Containers:** Using `map<int, vector<string>>` for structured data storage.
- **Polymorphism and Abstract Classes:** Pure virtual functions, inheritance.
- **Friend Functions:** Overloading `<<` operator for custom printing.
- **Exception Handling:** Custom runtime errors with `PersonException`.
- **Input Handling:** `getline(cin>>ws, var)` for reading strings with spaces.
- **Dynamic Object Storage:** Using `vector<Person*>` for polymorphic objects.

## Notes / Takeaways
- STL containers greatly simplify tasks like counting, sorting, and storing structured data.
- Understanding when to use `set` vs `multiset` vs `map` is crucial for efficiency.
- OOP concepts like inheritance, polymorphism, and friend functions are powerful when combined with STL.
- Exception handling ensures robustness for user input and business logic constraints.
- Day 5 reinforced combining advanced STL techniques with practical OOP design for real-world scenarios.
