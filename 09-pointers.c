// Program: Pointers in C
// Description: Demonstrates pointers, syntax, declaration, pointer to pointer, function calls (call by value & reference), and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes and practice)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 09-pointers.c -o ptr
// 4. Run:
//    ptr

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Pointer:
// A variable that stores the memory address of another variable.

// ======================================================
// 🔹 SYNTAX & DECLARATION
// ======================================================

// Syntax:
// data_type *pointer_name;

// Example:
// int x = 10;
// int *ptr = &x;

// & → Address-of operator
// * → Dereference operator

// ======================================================
// 🔹 FORMAT SPECIFIERS
// ======================================================

// %d  → integer value
// %p  → address (pointer)
// %u  → unsigned integer (sometimes used for address)

// ======================================================
// 🔹 POINTER TO POINTER
// ======================================================

// A pointer that stores the address of another pointer

// Syntax:
// int **ptr2;

// Example:
// int x = 10;
// int *ptr1 = &x;
// int **ptr2 = &ptr1;

// Access:
// *ptr1 → value of x
// **ptr2 → value of x

// ======================================================
// 🔹 FUNCTION CALLS WITH POINTERS
// ======================================================

// Call by Value:
// Copy of variable is passed → original value not changed

// Call by Reference:
// Address is passed → original value can be modified

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - Pointers store memory addresses, not actual values
// - Using pointers, we can directly modify variables (efficient memory usage)
// - I understood how arrays and pointers are closely related
// - Call by reference allows modifying original data
// - Pointer to pointer helps in multi-level memory access
// - Pointers are widely used in data structures (linked list, trees)

// Important Points:
// - Always initialize pointers before use
// - Use correct data type for pointer
// - Dereferencing uninitialized pointer causes crash
// - Arrays and pointers are strongly connected
// - Pointer arithmetic depends on data type size
// - Use %p to print address (best practice)
// - Double pointers (**ptr) are useful in dynamic memory allocation

// Mistakes:
// - Using uninitialized pointers (wild pointers)
// - Dereferencing NULL pointer
// - Confusing * (value) and & (address)
// - Memory leaks in advanced pointer usage
// - Incorrect pointer arithmetic
// - Forgetting that array name is a pointer

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>

// Call by value
void swapValue(int a, int b);

// Call by reference
void swapReference(int *a, int *b);

// Practice functions
int findMax(int *a, int *b);
void reverseArray(int arr[], int size);
void printAlphabets();

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    // ==================================================
    // 🔹 BASIC POINTER DEMO
    // ==================================================

    int x = 10;
    int *ptr = &x;

    printf("\n--- POINTER DEMO ---\n");
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer value = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    // ==================================================
    // 🔹 POINTER TO POINTER
    // ==================================================

    int **ptr2 = &ptr;

    printf("\n--- POINTER TO POINTER ---\n");
    printf("Value using **ptr2 = %d\n", **ptr2);

    // ==================================================
    // 🔹 CALL BY VALUE vs REFERENCE
    // ==================================================

    int a = 5, b = 10;

    printf("\n--- CALL BY VALUE ---\n");
    swapValue(a, b);
    printf("After swapValue: a = %d, b = %d\n", a, b);

    printf("\n--- CALL BY REFERENCE ---\n");
    swapReference(&a, &b);
    printf("After swapReference: a = %d, b = %d\n", a, b);

    // ==================================================
    // 🔹 PRACTICE 1: MAX USING POINTER
    // ==================================================

    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", findMax(&num1, &num2));

    // ==================================================
    // 🔹 PRACTICE 2: REVERSE ARRAY
    // ==================================================

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("\nOriginal Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array: ");
    reverseArray(arr, size);

    // ==================================================
    // 🔹 PRACTICE 3: ALPHABETS USING POINTER
    // ==================================================

    printf("\n\nAlphabets:\n");
    printAlphabets();

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Call by Value (No change in original)
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference (Changes original)
void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Find maximum using pointer
int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

// Reverse array using pointer
void reverseArray(int arr[], int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// Print alphabets using pointer
void printAlphabets() {
    char ch = 'A';
    char *ptr = &ch;

    while (*ptr <= 'Z') {
        printf("%c ", *ptr);
        (*ptr)++;
    }
}
