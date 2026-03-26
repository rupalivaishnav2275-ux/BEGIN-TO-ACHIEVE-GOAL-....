// Program: Arrays in C 
// Description: Demonstrates array concepts, syntax, operations, pointer relation, and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own understanding and practice)
// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 10-arrays.c -o arrays
// 4. Run:
//    arrays

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Array:
// A collection of elements of the same data type stored in contiguous memory locations.

// ======================================================
// 🔹 SYNTAX & DECLARATION
// ======================================================

// Syntax:
// data_type array_name[size];

// Example:
/// int arr[5];

// ======================================================
// 🔹 INITIALIZATION
// ======================================================

// int arr[5] = {1, 2, 3, 4, 5};
// int arr[] = {10, 20, 30};
// int arr[5] = {1, 2}; // remaining elements = 0

// ======================================================
// 🔹 INPUT / OUTPUT
// ======================================================

// Input:
// for (int i = 0; i < n; i++)
//     scanf("%d", &arr[i]);

// Output:
// for (int i = 0; i < n; i++)
//     printf("%d ", arr[i]);

// ======================================================
// 🔹 ARRAY IS A POINTER
// ======================================================

// arr → represents base address of array
// arr[i] == *(arr + i)

// ======================================================
// 🔹 POINTER ARITHMETIC
// ======================================================

// *(arr + i) → access element
// arr + 1 → moves to next element (based on data type size)

// ======================================================
// 🔹 TRAVERSING AN ARRAY
// ======================================================

// Loop through all elements using for loop

// ======================================================
// 🔹 ARRAYS AS FUNCTION ARGUMENT
// ======================================================

// Arrays are passed as pointers to functions

// Example:
// void display(int arr[], int n);

// ======================================================
// 🔹 MULTIDIMENSIONAL ARRAY
// ======================================================

// Syntax:
// int arr[rows][cols];

// Example:
// int matrix[2][2] = {{1,2},{3,4}};

// ======================================================
// 🔹 KEY CONCEPTS
// ======================================================

// ✔ Index starts from 0
// ✔ Contiguous memory allocation
// ✔ arr[i] == *(arr + i)
// ✔ Arrays decay into pointers when passed to functions

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood how arrays store multiple values efficiently
// - I learned traversal using loops and pointer arithmetic
// - I practiced modular coding using functions
// - Arrays helped me build logic for searching and manipulation

// Important Points:
// - Always stay within bounds (0 to n-1)
// - Array name behaves like a pointer (base address)
// - Passing arrays does NOT copy entire data
// - Pointer arithmetic depends on data type size

// Mistakes:
// - Accessing invalid index (out-of-bounds)
// - Forgetting array size during loops
// - Confusing array with pointer (they are related, not identical)

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>

void countOccurrence(int arr[], int n, int x);
int findLargest(int arr[], int n);
void insertElement(int arr[], int *n, int element);
void display(int arr[], int n);

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    // ==================================================
    // 🔹 ARRAY INPUT
    // ==================================================

    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements: ");
    display(arr, n);

    // ==================================================
    // 🔹 PRACTICE 1: COUNT OCCURRENCE
    // ==================================================

    int x;
    printf("\nEnter number to find occurrence: ");
    scanf("%d", &x);

    countOccurrence(arr, n, x);

    // ==================================================
    // 🔹 PRACTICE 2: LARGEST ELEMENT
    // ==================================================

    int largest = findLargest(arr, n);
    printf("Largest element = %d\n", largest);

    // ==================================================
    // 🔹 PRACTICE 3: INSERT ELEMENT
    // ==================================================

    int element;
    printf("\nEnter element to insert: ");
    scanf("%d", &element);

    insertElement(arr, &n, element);

    printf("Updated array: ");
    display(arr, n);

    // ==================================================
    // 🔹 MULTIDIMENSIONAL ARRAY DEMO
    // ==================================================

    int matrix[2][2] = {{1, 2}, {3, 4}};

    printf("\n2D Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Count occurrences of x
void countOccurrence(int arr[], int n, int x) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            count++;
    }

    printf("Occurrence of %d = %d\n", x, count);
}

// Find largest element
int findLargest(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

// Insert element at end
void insertElement(int arr[], int *n, int element) {
    arr[*n] = element;
    (*n)++;
}

// Display array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
