# Aim:
To study and implement arrays and strimgs in C++

# Software Required :
Visual Studio

# Theory:
# 📘 Theory of Arrays in C++

🔹 Definition

An array is a collection of elements of the same data type.

Stored in contiguous memory locations.

Accessed using a single identifier and index values.

🔹 Declaration & Initialization

Declaration syntax:

type arrayName[size];

Example: int numbers[5];

Initialization:

int numbers[5] = {1, 2, 3, 4, 5};

If fewer values are provided, remaining elements are zero-initialized.

Size can be inferred: int values[] = {10, 20, 30};

🔹 Indexing

Arrays use zero-based indexing.

First element: array[0]

Last element: array[size - 1]

Accessing out-of-bounds indices leads to undefined behavior.

🔹 Memory Characteristics

Elements are stored in contiguous memory.

Array name acts as a pointer to the first element.

Efficient access using pointer arithmetic.

🔹 Types of Arrays

Static Arrays:

Size fixed at compile time.

Allocated on the stack.

Dynamic Arrays:

Size determined at runtime.

Allocated on the heap using new.

Multidimensional Arrays:

Arrays of arrays (e.g., 2D arrays: int matrix[3][3];)

# 📘 Theory of Strings in C++
🔹 Definition

A string is a sequence of characters used to represent text.

C++ supports two main types of strings:

C-style strings (char arrays)

C++ std::string class (from the Standard Library)

🔹 C-Style Strings (char arrays)

Declared as an array of characters ending with a null character ('\0').

Declaration:

char str[10];

char str[] = "Hello"; → Automatically adds '\0' at the end.

Initialization:

Can be initialized with string literals or character arrays.

Access:

Individual characters accessed via indexing: str[0], str[1], etc.

Limitations:

Fixed size

Manual memory management

No built-in methods for manipulation
