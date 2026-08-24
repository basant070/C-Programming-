#include<stdio.h>
struct Student
{
    char name[50];
    int age;
    float marks; 
}s1;
void display(struct Student *s);
int main ()
{
    printf("==============================================\n");
    printf("Enter the name of student: ");
    gets(s1.name);
    printf("Enter the age of student: ");
    scanf("%d", &s1.age);
    printf("Enter the marks of student: ");
    scanf("%f", &s1.marks);
    
    display(&s1);
    printf("==============================================\n");
    return 0;
}
void display(struct Student *s)
{
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Marks: %.f\n", s->marks);
}