// Program: Hello World in C
// Description: Prints "Hello World" on the screen and demonstrates the basic structure of a C program
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own understanding and notes) 

// Compiler: GCC (MinGW)
// Language: C++
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// Step 1: Install MinGW / GCC compiler

// Step 2: Open Command Prompt and navigate to file location
// cd path_to_your_file

// Step 3: Compile the program
// gcc 01-hello-world.c -o hello

// Step 4: Run the program
// hello

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Program: 
// A set of instructions given to a computer to perform a task.

// main(): 
// Entry point of every C program, Execution starts from here.

// printf(): 
// A library function used to display output on the screen.

// Header File: 
// A file that contains predefined functions (e.g., stdio.h).

// ======================================================
// 🔹 BASIC STRUCTURE OF C PROGRAM
// ======================================================

// 1. Documentation Section (comments)
// 2. Link Section (#include)
// 3. main() Function
// 4. Execution Statements
// 5. return 0;

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understod that every C program starts execution from main()
// - printf() is used to display output on the screen
// - Header files like stdio.h are required to use predefined functions
// - This program helped me understand the basic structure of C programs

// Important Points:
// - main() is mandatory in every C program
// - Semicolon (;) is must be used after every statement
// - Curly braces {} define the scope of a function

// Mistakes:
// - I Forgot semicolon (;) which caused compilation errors
// - I tried writing multiple main() functions (not allowed)
// - I missed including stdio.h initially

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <stdio.h>

int main() {

    // 🔸 Output Section
    printf("Hello World\n");

    // 🔸 Program executed successfully
    return 0;
}
