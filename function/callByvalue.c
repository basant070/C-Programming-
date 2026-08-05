// function call by value

#include<stdio.h>
int sum ( int , int );

int main ()
{
    int number1, number2, addition;
    printf("Enter two numbers :");
    scanf("%d %d",&number1 ,&number2);
    addition = sum ( number1 , number2);
    printf ("\n Addition is : %d", addition);
    return 0;
}
int sum ( int x, int y)
{
    return (x +y);
}