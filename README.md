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

🔹 Common Operations with std::string
Concatenation:

std::string full = first + " " + last;

Length:

str.length() or str.size()

Substring:

str.substr(start, length)

Comparison:

==, !=, <, >, etc.

Search:

str.find("text")

Modification:

str.replace(), str.insert(), str.erase()

# Algorithm
# Progam 1
Objective : Printing Elements of an Array

🔹 Steps

1.Start the program.

2.Declare an array arr[] with elements {10, 20, 30, 40, 50}.

3.Use a for loop to iterate over the array.

4.Print each element of the array.

5.End the program.

# Program 2
Objective : Searching for a Number in an Array

🔹 Steps

1.Start

2.Declare an integer array arr of size 5 and initialize it with values {10, 20, 30, 40, 50}.

3.Declare variables:

i for loop iteration

num to store the number to be searched

4.Prompt the user to enter the number to be searched.

5.Read the input value into num.

6.Loop through the array from index 0 to 4:

For each index i, check if arr[i] == num

If the condition is true:

Display the message: "The num is found at location : i+1"

7. End

# Program 3 
Objective : reversing an array

🔹 Steps

1.Start

2.Declare an integer array arr of size 5.

3.Declare variables:

i for loop iteration

n for display loop

4.Display message: "Enter the elements of the array:"

5.Loop from i = 0 to i < 5:

Read input from user and store in arr[i]

6.Display message: "The array is:"

7.Loop from n = 0 to n < 5:

Print arr[n] followed by a space

8.Display message: "The reversed array is:"

9.Loop from i = 4 down to i >= 0:

Print arr[i] followed by a space

10.End
