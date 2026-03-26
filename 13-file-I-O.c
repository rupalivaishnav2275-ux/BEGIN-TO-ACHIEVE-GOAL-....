// Program: File Handling in C
// Description: Demonstrates file operations, modes, reading/writing,and practice problems using real-world scenarios.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes + practice)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// gcc 13-file-handling.c -o file
// file

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// File:
// A file is used to store data permanently in secondary memory.

// ======================================================
// 🔹 TYPES OF FILE
// ======================================================

// 1. Text File   → Stores data in readable format (.txt)
// 2. Binary File → Stores data in binary format (.dat)

// ======================================================
// 🔹 FILE POINTER
// ======================================================

// FILE *fptr;

// ======================================================
// 🔹 FILE OPENING MODES
// ======================================================

// "r"  → Read
// "w"  → Write (overwrite)
// "a"  → Append
// "r+" → Read + Write

// ======================================================
// 🔹 BASIC FUNCTIONS
// ======================================================

// fopen()  → open file
// fclose() → close file
// fprintf() → write to file
// fscanf()  → read from file
// fgetc()   → read character
// fputc()   → write character

// ======================================================
// 🔹 EOF (END OF FILE)
// ======================================================

// Used to detect end of file while reading

// ======================================================
// 🔹 BEST PRACTICES
// ======================================================

// - Always check if file opened successfully
// - Always close file using fclose()
// - Use fgets() for safe string reading
// - Avoid data loss by choosing correct mode

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood how files help store data permanently
// - I learned how to read and write data using file pointers
// - I practiced real-world use cases like storing student records
// - I understood the importance of file modes (r, w, a)
// - I learned how EOF helps in reading files completely

// Important Points:
// - Always check if file pointer is NULL
// - Always close file after use
// - Use correct mode to avoid data loss
// - Use fgetc for character-wise reading
// - Use fprintf for formatted writing

// Mistakes:
// - I forgot to close file (data not saved properly)
// - I used wrong file mode and lost data
// - I didn't check NULL pointer initially
// - I confused input buffer while taking string input

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>
#include <string.h>

void readStringFromFile();
void replaceWithVowelCount();
void writeStudentData();

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    printf("\n=========== FILE HANDLING IN C ===========\n");

    // ==================================================
    // 🔹 PRACTICE 1: READ STRING FROM FILE
    // ==================================================

    readStringFromFile();

    // ==================================================
    // 🔹 PRACTICE 2: REPLACE WITH VOWEL COUNT
    // ==================================================

    replaceWithVowelCount();

    // ==================================================
    // 🔹 PRACTICE 3: STORE STUDENT DATA
    // ==================================================

    writeStudentData();

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// PRACTICE 1
// Read string from file and display
void readStringFromFile() {

    FILE *fptr = fopen("input.txt", "r");

    if (fptr == NULL) {
        printf("\nError opening file!\n");
        return;
    }

    char ch;
    printf("\n--- FILE CONTENT ---\n");

    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);
}

// PRACTICE 2
// Replace file content with vowel count
void replaceWithVowelCount() {

    FILE *fptr = fopen("input.txt", "r");

    if (fptr == NULL) {
        printf("\nError opening file!\n");
        return;
    }

    char ch;
    int vowels = 0;

    while ((ch = fgetc(fptr)) != EOF) {
        if (strchr("AEIOUaeiou", ch)) {
            vowels++;
        }
    }

    fclose(fptr);

    // Overwrite file
    fptr = fopen("input.txt", "w");

    fprintf(fptr, "Number of vowels = %d", vowels);

    fclose(fptr);

    printf("\nVowel count written to file.\n");
}

// PRACTICE 3
// Store 5 students data in file
void writeStudentData() {

    FILE *fptr = fopen("students.txt", "w");

    if (fptr == NULL) {
        printf("\nError creating file!\n");
        return;
    }

    char name[50], course[50];
    float marks, cgpa;

    fprintf(fptr, "Name\tMarks\tCGPA\tCourse\n");
    fprintf(fptr, "--------------------------------------\n");

    for (int i = 0; i < 5; i++) {

        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", name);

        printf("Marks: ");
        scanf("%f", &marks);

        cgpa = marks / 10.0;

        printf("Course: ");
        scanf(" %[^\n]", course);

        fprintf(fptr, "%s\t%.2f\t%.2f\t%s\n", name, marks, cgpa, course);
    }

    fclose(fptr);

    printf("\nStudent data stored in file successfully.\n");
}
