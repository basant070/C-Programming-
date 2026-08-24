#include<stdio.h>
    struct Student
{
    char name[50];
    int age;
    float marks[5];
}s1;
int main ()
{
int i, sum =0;
 float per;
 printf("Enter the name of student: ");
 gets(s1.name);
 printf("Enter the age of student: ");
 scanf("%d", &s1.age);
 printf("Enter the marks of student in 5 subjects: ");
for(i=0; i<5; i++)
{
    printf("Subject %d: ", i+1);
    scanf("%f", &s1.marks[i]);
    sum += s1.marks[i];
}
per = (sum/5)*100;
printf("\nStudent Details:\n");
printf("Name: %s\n", s1.name);
printf("Age: %d\n", s1.age);
printf("Percentage: %.2f%%\n", per);
return 0;
}