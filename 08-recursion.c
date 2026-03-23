// Program: Recursion in C
// Description: Demonstrates recursion, working, comparison with normal functions,
//              and practice problems.
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
//    gcc 08-recursion.c -o recur
// 4. Run:
//    recur

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Recursion:
// A function that calls itself to solve a smaller instance of the same problem.

// ======================================================
// 🔹 KEY CONCEPTS
// ======================================================

// Base Case:
// Condition where recursion stops (prevents infinite calls)

// Recursive Case:
// Function calls itself with a smaller input

// Call Stack:
// Stores function calls in memory (LIFO order)

// ======================================================
// 🔹 NORMAL FUNCTION vs RECURSION
// ======================================================

// Normal Function (Iterative Approach):
// Uses loops (for, while)
// Faster and memory-efficient

// Recursion:
// Function calls itself repeatedly
// More readable for complex problems
// Uses extra memory due to function call stack

// ======================================================
// 🔹 DRY RUN EXAMPLE (SUM OF DIGITS: 123)
// ======================================================

// sumOfDigits(123)
// → 3 + sumOfDigits(12)
// → 3 + (2 + sumOfDigits(1))
// → 3 + 2 + (1 + sumOfDigits(0))
// → 3 + 2 + 1 + 0 = 6

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - Recursion helps solve problems by breaking them into smaller subproblems
// - It makes code shorter and more elegant compared to loops in some cases
// - I understood how function calls are stored in stack memory
// - I learned that every recursive solution can also be solved iteratively
// - Recursion improves problem-solving thinking (divide & conquer approach)
// - It is widely used in trees, graphs, backtracking, and dynamic programming

// Important Points:
// - Every recursive function MUST have a base case
// - Base case should be reachable (otherwise infinite recursion)
// - Recursive calls should move toward the base case
// - Each function call gets its own memory (stack frame)
// - Recursion may cause stack overflow for large inputs
// - Use recursion when problem can be divided into similar subproblems
// - Prefer iteration when performance is critical

// Mistakes:
// - Forgetting base case → infinite recursion (program crash)
// - Incorrect base case → wrong output
// - Recursive call not reducing problem size
// - Not understanding stack flow → confusion in debugging
// - Using recursion where loop is simpler
// - Not handling edge cases (like negative numbers)
// - Large recursion depth → stack overflow

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>

// Practice Functions
int sumOfDigits(int n);
long long power(int base, int exp);

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    printf("\n--- RECURSION DEMO ---\n");

    // ==================================================
    // 🔹 PRACTICE 1: SUM OF DIGITS
    // ==================================================

    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    if (number < 0) number = -number; // handle negative

    int sum = sumOfDigits(number);
    printf("Sum of digits = %d\n", sum);

    // ==================================================
    // 🔹 PRACTICE 2: POWER FUNCTION
    // ==================================================

    int base, exponent;
    printf("\nEnter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0) {
        printf("Negative exponent not supported in this version\n");
    } else {
        long long result = power(base, exponent);
        printf("Result = %lld\n", result);
    }

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Function: Sum of Digits (Recursion)
int sumOfDigits(int n) {

    // Base Case
    if (n == 0)
        return 0;

    // Recursive Case
    return (n % 10) + sumOfDigits(n / 10);
}

// Function: Power Function (Recursion)
long long power(int base, int exp) {

    // Base Case
    if (exp == 0)
        return 1;

    // Recursive Case
    return base * power(base, exp - 1);
}
