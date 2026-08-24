#include<stdio.h>
struct Student
{
    char name[50];
    int age;
}; 
struct Student getStudentDetails();
int main ()
{
    struct Student s1;
    s1 = getStudentDetails();
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
        printf("==============================================\n");
    return 0;
}
struct Student getStudentDetails()
{
    struct Student s;
    printf("==============================================\n");
    printf("Enter the name of student: ");
    gets(s.name);
    printf("Enter the age of student: ");
    scanf("%d", &s.age);
    return s;
}