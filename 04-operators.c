// Program: Operators in C
// Description: Demonstrates operators with types, precedence, and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes and understanding)
// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 04-operators.c -o operators
// 4. Run:
//    operators

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Operator: A symbol used to perform operations on variables and values.

// Types of Operators in C:
// 1. Arithmetic Operators
// 2. Relational Operators
// 3. Logical Operators
// 4. Assignment Operators
// 5. Bitwise Operators
// 6. Ternary Operator


// ======================================================
// 🔹 TYPES OF OPERATORS
// ======================================================

// 1. Arithmetic Operators
// 2. Relational Operators
// 3. Logical Operators
// 4. Assignment Operators
// 5. Bitwise Operators
// 6. Ternary Operator

// ======================================================
// 🔹 1️⃣ ARITHMETIC OPERATORS 
// ======================================================

// +  → Addition
// -  → Subtraction
// *  → Multiplication
// /  → Division
// %  → Modulus

// Example:
// int c = a + b;

// 🔸 Operator Precedence (High → Low)
// *, /, %
// +, -

// ======================================================
// 🔹 2️⃣ RELATIONAL OPERATORS 
// ======================================================

// == → equal to
// != → not equal
// >  → greater than
// <  → less than
// >= → greater than or equal
// <= → less than or equal

// Returns:
// 1 → True
// 0 → False

// ======================================================
// 🔹 3️⃣ LOGICAL OPERATORS 
// ======================================================

// && → AND
// || → OR
// !  → NOT

// 🔸 Truth Table

// A   B   A&&B   A||B
// 0   0    0      0
// 0   1    0      1
// 1   0    0      1
// 1   1    1      1

// NOT Operator:
// A   !A
// 0    1
// 1    0

// ======================================================
// 🔹 OTHER OPERATORS 
// ======================================================

// Assignment Operators:
// =, +=, -=, *=, /=

// Bitwise Operators:
// &, |, ^, ~, <<, >>

// Ternary Operator:
// condition ? expression1 : expression2

// ======================================================
// 🔹 COMPILATION
// ======================================================

// gcc file_name.c -o output_name
// ./output_name

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood that operators are used to perform operations on variables and values
// - I noticed that logical operators always return 0 (false) or 1 (true)
// - This topic helped me understand how conditions and calculations work in programs

// Important Points:
// - Operator precedence affects the final result (e.g., 3 + 2 * 5 = 12)
// - Relational operators return 0 or 1 based on condition 
// - Logical operators combine multiple conditions

// Mistakes:
// - I expected 9/2 = 4.5 but got 4 due to integer division
// - I confused '=' (assignment) with '==' (comparison)
// - I wrote wrong logical conditions and got unexpected outputs

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <stdio.h>

int main() {

    // ==================================================
    // 🔹 ARITHMETIC OPERATORS
    // ==================================================

    int a = 10, b = 5;

    printf("\n--- Arithmetic Operators ---\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    // ==================================================
    // 🔹 RELATIONAL OPERATORS
    // ==================================================

    printf("\n--- Relational Operators ---\n");
    printf("a == b → %d\n", a == b);
    printf("a != b → %d\n", a != b);
    printf("a > b  → %d\n", a > b);
    printf("a < b  → %d\n", a < b);

    // ==================================================
    // 🔹 LOGICAL OPERATORS
    // ==================================================

    printf("\n--- Logical Operators ---\n");
    printf("(a > 0 && b > 0) → %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0) → %d\n", (a > 0 || b < 0));
    printf("!(a > b) → %d\n", !(a > b));

    // ==================================================
    // 🔹 TERNARY OPERATOR
    // ==================================================

    int max = (a > b) ? a : b;
    printf("\nMax using ternary = %d\n", max);

    // ==================================================
    // 🔹 PRACTICE QUESTION
    // Average of 3 numbers
    // ==================================================

    float x, y, z;
    printf("\nEnter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    float avg = (x + y + z) / 3;
    printf("Average = %.2f\n", avg);

    // Custom Example: Check if number is positive or negative
    if (a > 0) {
        printf(''a is Positive\n");
    } else {
        printf("a is Negative\n")
    }
    
    return 0;
}
