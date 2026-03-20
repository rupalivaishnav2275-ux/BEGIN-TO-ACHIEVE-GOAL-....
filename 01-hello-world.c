// Program: Hello World
// Description: Prints "Hello World" on the screen
// Author: Rupali Vaishnav
// Date: 2026

// Learning Platform: Apna College

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

// Program: A set of instructions given to a computer to perform a task.
// main(): Entry point of every C program.
// printf(): Function used to display output on the screen.
// Header File: A file that contains predefined functions (e.g., stdio.h).

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
// - main() is the entry point
// - printf() is used for output
// - stdio.h is required for input/output functions

// Important Points:
// - Every C program starts from main()
// - Semicolon (;) is necessary after each statement
// - Curly braces {} define the function body

// Mistakes:
// - Forgot semicolon (causes compilation error)
// - Wrote duplicate main() function (only one main() allowed)
// - Forgot to include stdio.h

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <stdio.h>

int main() {

    // 🔸 Output Section

    printf("Hello World\n");

    return 0;
}
