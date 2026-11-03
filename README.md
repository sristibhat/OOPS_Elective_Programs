# OOPS Elective – C++ Programs

This repository contains C++ programs developed as part of my Object-Oriented Programming (OOPS) Elective coursework.

The programs progress from basic C++ programming concepts to classes, constructors, static members, friend functions, and inheritance.

## Student Information

| Field | Details |
|---|---|
| Name | Sristi Manjunath Bhat |
| Roll No. | 352 |
| Division | C |
| SRN | 01FE23BEC146 |
| Semester | 7 |

---

## Repository Layout

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
│   ├── Class7/
│   ├── Class8/
│   ├── Class9/
│   ├── Class10/
│   ├── Class11/
│   └── Class12/
│
├── .gitignore
└── README.md
```

The `Programs` directory is divided by class/session. Each folder contains the corresponding C++ source files.

---

## Class-wise Program Index

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

### Class 8 – Constructor Initializer Lists and Inheritance

These examples practise initializing base-class and derived-class members through constructor initializer lists. They also develop the student-result example using inheritance.

| File | Topic |
|---|---|
| `prog_1.cpp` | Initializing base and derived class members in a single-inheritance example |
| `prog_2.cpp` | Constructor initializer-list practice with `Person`, `Student`, and `IT_Student` |
| `prog_3.cpp` | Multiple inheritance using `Student`, `Test`, and `Result`; illustrates constructor requirements |
| `prog_4.cpp` | Creating a result class using parameterized base-class constructors |
| `prog_5.cpp` | Calculating total marks and percentage for three subjects using multiple inheritance |
| `prog_6.cpp` | Extending the student result calculation to five subjects |

### Class 9 – Multiple Inheritance

The programs demonstrate how a derived class can inherit features from more than one base class.

| File | Topic |
|---|---|
| `prog_1.cpp` | Multiple inheritance using `Liquid`, `Fuel`, and `Petrol` |
| `prog_2.cpp` | Combining student and test information through `Student`, `Test`, and `Result` classes |

### Class 10 – Virtual Base Classes and Function Overriding

This class covers ambiguity in multiple inheritance and the use of virtual functions to achieve runtime polymorphism.

| File | Topic |
|---|---|
| `prog_1.cpp` | Demonstrating ambiguity in the diamond inheritance structure |
| `prog_2.cpp` | Using a virtual base class to avoid duplicate base-class members |
| `prog_3.cpp` | Function overriding with a virtual function and a base-class pointer |
| `prog_4.cpp` | Comparing function calls with and without virtual-function behaviour |

### Class 11 – Runtime Polymorphism and Operator Overloading

The examples apply virtual functions to shape classes and introduce operator overloading for user-defined types.

| File | Topic |
|---|---|
| `prog_1.cpp` | Runtime polymorphism using a `Shape` base class and `Circle` |
| `prog_2.cpp` | Overriding `draw()` in `Circle`, `Square`, and `Triangle` |
| `prog_3.cpp` | Using an array of base-class pointers to call derived-class functions |
| `prog_4.cpp` | Abstract `Vehicle` class with derived `Car` and `Bike` classes |
| `prog_5.cpp` | Overloading binary `+` to add complex numbers |
| `prog_6.cpp` | Overloading binary `-` to subtract complex numbers |
| `prog_7.cpp` | Prefix and postfix increment operator overloading |
| `prog_8.cpp` | Prefix and postfix decrement operator overloading |

### Class 12 – String Operator Overloading and Exception Handling

The final set includes a string concatenation example and programs that demonstrate exception handling with different thrown values and error conditions.

| File | Topic |
|---|---|
| `prog_1.cpp` | Concatenating strings using the overloaded `+` operator |
| `prog_2.cpp` | Basic exception handling with `try`, `throw`, and `catch` |
| `prog_3.cpp` | Throwing and catching an integer when an input value is zero |
| `prog_4.cpp` | Handling exceptions of different data types |
| `prog_5.cpp` | Handling division-by-zero using a thrown message |
| `prog_6.cpp` | Examining the order of operations in a division-by-zero example |

---

##  Concepts covered

- C++ fundamentals, variables, data types, and console input/output
- Functions and parameter passing: value, reference, and pointer
- C-style strings and C++ strings
- Classes, objects, data members, and member functions
- Default, parameterized, and copy constructors
- Constructor initializer lists and destructors
- Static data members and static member functions
- Friend functions
- Inheritance: single, multi-level, and multiple
- Access control using `private`, `public`, and `protected`
- Virtual base classes and the diamond problem
- Function overriding and runtime polymorphism
- Abstract classes and pure virtual functions
- Operator overloading: binary addition/subtraction and increment/decrement
- Exception handling using `try`, `throw`, and `catch`

---

## Language and Tools

**Language:** C++

**Tools used:**
- GCC / G++ compiler
- Visual Studio Code
- Code::Blocks
- Git and GitHub

The programs use standard C++ headers, including `<iostream>`, `<cstring>`, and `<string>` where required.

---

## Running the Programs

### Using Visual Studio Code or a terminal

1. Open the repository folder in Visual Studio Code.
2. Open the terminal in the repository's root directory.
3. Compile the required source file. For example:

```bash
g++ Programs/Class1/prog_1.cpp -o program
```

4. Run the executable on Windows:

```bash
program.exe
```

On Linux or macOS, use:

```bash
./program
```

Change the source-file path to the class and program you want to run.

### Using Code::Blocks

1. Launch Code::Blocks.
2. Open the required `.cpp` file.
3. Check that a GCC/MinGW compiler is configured.
4. Choose **Build and Run**.
5. View the result in the console window.

---

## Notes
- Programs are organized according to the class/session in which the concepts were covered.
- The programs are intended for learning and practice of C++ and OOPS concepts.
