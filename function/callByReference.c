// function call by reference 

#include<stdio.h>
void swapping ( int *, int *);
int main ()
{
    int number1 = 10, number2 = 15;
    printf("Before swapping number1 = %d and  number2 =%d", number1,  number2);
    swapping (&number1, &number2);  // address passed 
       printf("\nAfter swapping number1 = %d and number2 = %d", number1, number2);
    return 0;
}
void swapping ( int *a, int *b) 
{
    int t;
     t = *a;
     *a = *b;
     *b = t;
}