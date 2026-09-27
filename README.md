# OOPS Elective – C++ Programs

This repository contains C++ programs developed as part of my Object-Oriented Programming (OOPS) Elective coursework.

The programs progress from basic C++ programming concepts to classes, constructors, static members, friend functions, and inheritance.

---

## 👨‍🎓 Student Details

| Field | Details |
|---|---|
| Name |Sristi Manjunath Bhat|
| Roll No. |352 |
| Division | C|
| SRN |01FE23BEC146 |
| Semester |7|

---

## 📁 Repository Structure

```text
OOPS_Elective_Programs/
│
├── Programs/
│   ├── Class1/
│   ├── Class2/
│   ├── Class3/
│   ├── Class4/
│   ├── Class5/
│   ├── Class6/
│   └── Class7/
│
├── .gitignore
└── README.md
```

Each class folder contains the programs covered during the respective class/session.

---

## 📚 Class-wise Programs

### Class 1 – C++ Fundamentals

Programs covering basic C++ syntax, input/output, data types, strings, and parameter passing.

| Program | Concept |
|---|---|
| `prog_1.cpp` | Basic output using `cout` |
| `prog_2.cpp` | User input and addition of two numbers |
| `prog_3.cpp` | Basic data types and variable declaration |
| `prog_4.cpp` | Area of a rectangle using user input |
| `prog_5.cpp` | Finding the largest number in a list |
| `prog_6.cpp` | Finding string length using C-style and C++-style approaches |
| `prog_7.cpp` | C-style string palindrome checking |
| `prog_8.cpp` | C++-style palindrome checking |
| `prog_9.cpp` | Parameter passing – pass by value |
| `prog_10.cpp` | Parameter passing – pass by reference |
| `prog_11.cpp` | Parameter passing – pass by pointer |

### Class 2 – Classes and Objects

Introduction to classes, objects, member functions, and defining functions outside a class.

| Program | Concept |
|---|---|
| `prog_1.cpp` | Creating a class and object; accessing private data through member functions |
| `prog_2.cpp` | Student class with data members and member functions |
| `prog_3.cpp` | Defining a class member function outside the class |
| `prog_4.cpp` | Rectangle class with member functions for setting values and calculating area |
| `prog_5.cpp` | Rectangle class with a function returning the calculated area |

### Class 3 – Member Functions and Constructors

Programs covering class-based data handling, object interaction, and constructors.

| Program | Concept |
|---|---|
| `prog_1.cpp` | `Time` class and addition of two time objects |
| `prog_2.cpp` | Addition of two complex numbers using objects |
| `prog_3.cpp` | Default constructor for initializing employee data |
| `prog_4.cpp` | Default and parameterized constructors |
| `prog_5.cpp` | Parameterized constructor using a `Distance` class |
| `prog_6.cpp` | Default, parameterized, and copy constructors |

### Class 4 – Destructors and Static Data Members

Programs demonstrating object destruction and static members shared among objects.

| Program | Concept |
|---|---|
| `prog_1.cpp` | Destructor with default, parameterized, and copy constructors |
| `prog_2.cpp` | Static data member shared by multiple objects |
| `prog_3.cpp` | Static counter with a separate employee ID for each object |

### Class 5 – Static Member Functions and Friend Functions

Programs covering static member functions and access to private class members through friend functions.

| Program | Concept |
|---|---|
| `prog_1.cpp` | Static member function and static data member |
| `prog_2.cpp` | Friend function accessing private members of a class |
| `prog_3.cpp` | Friend function with object parameters |
| `prog_4.cpp` | Common friend function accessing private data from two classes |

### Class 6 – Inheritance

Introduction to inheritance and multi-level inheritance.

| Program | Concept |
|---|---|
| `prog_1.cpp` | Single-level inheritance using `Animal` and `Dog` |
| `prog_2.cpp` | Multi-level inheritance using `Person`, `Student`, and `IT_Student` |
| `prog_3.cpp` | Multi-level inheritance and access modes |

### Class 7 – Multi-level Inheritance and Access Control

Further practice with multi-level inheritance and the `protected` access specifier.

| Program | Concept |
|---|---|
| `prog_1.cpp` | Multi-level inheritance using `Vehicle`, `Car`, and `SportsCar` |
| `prog_2.cpp` | Multi-level inheritance using protected members |


---

## 🧠 Concepts Covered

- Basic C++ syntax
- Input and output using `cin` and `cout`
- Variables and data types
- Functions
- Parameter passing
  - Pass by value
  - Pass by reference
  - Pass by pointer
- Strings
- Classes and objects
- Data members and member functions
- Member functions defined outside a class
- Constructors
  - Default constructor
  - Parameterized constructor
  - Copy constructor
- Destructors
- Static data members
- Static member functions
- Friend functions
- Friend functions involving multiple classes
- Single-level inheritance
- Multi-level inheritance
- Access specifiers
  - `private`
  - `public`
  - `protected`

---

## 💻 Programming Language

**C++**

The programs use standard C++ features and headers such as:

```cpp
#include <iostream>
#include <cstring>
#include <string>
```

---

## 🛠️ Tools Used

- C++
- GCC / G++ compiler
- Visual Studio Code / Code::Blocks
- Git
- GitHub

---

## ▶️ How to Run

### Option 1: Visual Studio Code

Open the repository folder in Visual Studio Code.

Compile a program using:

```bash
g++ Programs/Class_1/prog_1.cpp -o program
```

Run it on Windows using:

```bash
program.exe
```

Or, depending on the terminal:

```bash
./program
```

Replace the file path with the required `.cpp` program.

### Option 2: Code::Blocks

1. Open Code::Blocks.
2. Open the required `.cpp` file.
3. Make sure GCC/MinGW is configured.
4. Select **Build and Run**.
5. The output will appear in the console window.

---


## 📌 Notes

- Programs are organized according to the class/session in which the concepts were covered.
- The programs are intended for learning and practice of C++ and OOPS concepts.
