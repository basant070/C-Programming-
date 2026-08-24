#include<stdio.h>
struct Employee
{
    char name[50];
    int age;
    float salary;
    struct dob
    {
        int day;
        int month;
        int year;
    }dob;
}E1;
int main ()
{
    printf("======== Employee Information System ======\n");
    printf("Enter the name of employee: ");
    gets(E1.name);
    printf("Enter the age of employee: ");
    scanf("%d", &E1.age);
    printf("Enter the salary of employee: ");
    scanf("%f", &E1.salary);
    printf("Enter the date of birth of employee (dd mm yyyy): ");
    scanf("%d %d %d", &E1.dob.day, &E1.dob.month, &E1.dob.year);
    
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", E1.name);
    printf("Age: %d\n", E1.age);
    printf("Salary: %f\n", E1.salary);
    printf("Date of Birth: %d/%d/%d\n", E1.dob.day, E1.dob.month, E1.dob.year);
    printf("===========================================\n");
    return 0;
}