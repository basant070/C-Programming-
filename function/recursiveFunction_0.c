// this program can print fibonacii series up to 
// user wants to print 
// using recursive function 


#include<stdio.h>
int fibonacci ( int );
int main ()
{
     int number , x ;
     printf("Fibonacci series up to :");
     scanf("%d", &number);
     for (int  i = 1; i <= number; i++)
     {
        x = fibonacci ( i );
        printf(" %d \t", x );
     }
     return 0;
      
}
int fibonacci ( int k )
{
    if ( k == 1 )
    return 0;
    else if ( k == 2)
    {
        return 1 ; 
    }
    
    else
    {
        return (fibonacci (k-1 )+ fibonacci (k-2));
    }
   
}