#include<stdio.h>
int main ()
{
    union student
    {
        char name[20];
        int rollno;
        int age ;
    };
    union student s1;
    printf("Enter the name of student: ");
     scanf(" %19[^\n]", s1.name); 
    printf("Enter the roll number of student: ");   
    scanf("%d", &s1.rollno);
    printf("Enter the age of student: ");
    scanf("%d", &s1.age);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("(since union can only hold one value at a time, the last value assigned will be stored)\n");
    printf("Roll Number: %d\n", s1.rollno);
    printf("Age: %d\n", s1.age);
    return 0;
}