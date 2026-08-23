#include <stdio.h>
#include <string.h>

// Define a structure to represent a Student
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare and initialize a structure variable
    struct Student s1;

    // Assign values to structure members
    strcpy(s1.name, "Ravi Sharma");
    s1.age = 20;
    s1.marks = 85.5;

    // Access and print structure members
    printf("Student Details:\n");
    printf("Name  : %s\n", s1.name);
    printf("Age   : %d\n", s1.age);
    printf("Marks : %.2f\n", s1.marks);

    // Declare another structure variable and initialize directly
    struct Student s2 = {"Anita Gupta", 22, 91.0};

    printf("\nAnother Student:\n");
    printf("Name  : %s\n", s2.name);
    printf("Age   : %d\n", s2.age);
    printf("Marks : %.2f\n", s2.marks);

    return 0;
}