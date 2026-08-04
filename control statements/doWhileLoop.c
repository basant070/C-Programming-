// program that takes a positive integer from the user and 
// can print the sum of the digit using dowhile loop.
#include<stdio.h>
int main ()
{
    int sum= 0,remainder, positiveNumber;
    printf("Enter a positive integer : ");
    scanf("%d",&positiveNumber);
    do
    {
       remainder = positiveNumber %10;
       sum = sum + remainder;
       positiveNumber = positiveNumber /10;
               /* code */
    } while (positiveNumber > 0);
    printf("Sum is : %d", sum);
    
    return 0;
}