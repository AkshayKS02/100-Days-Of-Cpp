# Comprehensive Student and Staff Management System

## Overview
This project is a menu-driven C++ application designed to manage students and staff in an educational institution. It leverages object-oriented programming principles such as inheritance, polymorphism, encapsulation, and exception handling.  

Users can add students and staff, display their details, and prevent duplicate entries or invalid data using custom exceptions.

---

## Concepts Used

### 1. Classes and Objects

#### Abstract Base Class: `Person`
- **Attributes:**  
  - `name` (string)  
  - `age` (int)  
- **Methods:**  
  - `virtual void display() const = 0;`  
  - `friend ostream& operator<<` → Prints name and age  
  - `void getDetails()` → Reads name and age, throws exception if invalid  
  - `void printPerson() const` → Prints basic info  

#### Derived Class: `Student`
- **Attributes:**  
  - `rno`  
  - `multiset<string> EnrolledSubjects`  
  - `map<string,string> Grade`  
  - **Static Attributes:**  
    - `set<int> RollNumbers`  
    - `map<int,Student*> ValidStudents`  
- **Methods:**  
  - `void StudentDetails()` → Reads all student info  
  - `void display() const override` → Prints student info and grades  
  - `static bool CheckRoll(int rno)` → Checks duplicates  
  - `const string gradePoint(int marks)` → Converts marks to grade  
  - `void AddSubjects(const string& sub, int marks)` → Adds subject and grade  

#### Derived Class: `Staff`
- **Attributes:**  
  - `employeeId`  
  - `set<string> CoursesHandled`  
  - **Static Attributes:**  
    - `set<string> EmployeeIdentity`  
    - `map<string,Staff*> ValidStaff`  
- **Methods:**  
  - `void StaffDetails()` → Reads all staff info  
  - `void display() const override` → Prints staff info and courses  
  - `static bool CheckEmpId(const string& id)` → Checks duplicates  
  - `void AddCourse(const string& sub)` → Adds course  

---

### 2. Exception Handling
- **Custom Exception:** `PersonException` (inherits from `runtime_error`)  
- **Handled scenarios:**  
  - Empty name  
  - Negative or zero age  
  - Duplicate roll numbers or employee IDs  
  - Duplicate subjects for a student  
  - Duplicate courses for staff  
  - Not found errors  

---

### 3. Menu-Driven Program
- Options:  
  1. Add a student  
  2. Display a student  
  3. Add a staff member  
  4. Display a staff member  
  - Any other key exits  

- Uses `vector<Person*>` to store both students and staff dynamically.

---

## How to Run

1. Clone the repository:
 ```bash 
    git clone https://github.com/AkshayKS02/100-Days-Of-Cpp.git
    cd 100-Days-Of-Cpp
```
2. Compile the program:
```bash
    g++ StudentManagementSystem.cpp -o StudentManagementSystem
```
3. Run the program :
```bash
    ./StudentManagementSystem
```

## Features
- **Polymorphism** – Base class Person used for both students and staff
- **Data integrity** – Duplicate checks and exception handling
- **Dynamic storage** – Uses vector<Person*> to store objects
- **Grades Calculation** – Automatically assigns grades based on marks
- **Clear Output** – Prints student/staff details neatly using overloaded << operator

## Future Improvements
- Add file I/O to save/load student and staff data
- Integrate a GUI for easier interaction
- Add search and update functionalities
- Implement sorting by grades, courses, or names