#include<stdio.h>
#include<conio.h>
int factorial ( int );
int main ()
{
    int number, fact ;
    printf("Enter a number : ");
    scanf("%d", &number);
    fact = factorial( number);
    printf("\n Factorial is : %d", fact);
    return 0;
}
int factorial ( int x)
{
    if ( x == 1)
    {
        return 1;
    }
    else 
    {
        return ( x * factorial ( x -1 ));
    }
    
}