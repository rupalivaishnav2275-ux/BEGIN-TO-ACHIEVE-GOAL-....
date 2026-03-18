// Program: Variables And Data Types
// Description: Demonstrates different variable types and printing in C
// Author: Rupali Vaishnav
// Date: 2026

// How to Run: 
// gcc 02_variables.c -o variables
// ./variables

// Notes:
// - int is used for integers
// - float is used for decimal numbers
// - char is used for single characters
// - printf() is used to display output

// Important Points:
// - %d is used for int 
// - %f is used for float 
// - %c is used for char
// - Variables can be reassigned

// Mistakes:
// - Forgot format specifiers earlier
// - Confused between %d and %f

#include <stdio.h>

int main (){

    // Basic Variables 
    int number =22;
    char percentage = '%';
    float pi = 3.14;

    // Variable reassignment
    int age = 20;
    age = 21;

    // Multiple variables
    int a = 30;
    int b = 80;

    // Naming conventions
    int _age = 20;
    int initial_price = 50;

    // Cleaner Output
    printf("\n--- Output ---\n");
    
    // Output
    printf("number = %d\n", number);
    printf("percentage = %c\n", percentage);
    printf("age = %d\n", age);
    printf("pi = %f\n", pi);
    printf("a = %d\n", a);
    printf("b = %d\n",b);
    printf("_age = %d\n" , _age);
    printf("initial price = %d\n" ,initial_price);

    return 0;
}
