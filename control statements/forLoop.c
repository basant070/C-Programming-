//This program shows implementation of for loop 
#include<stdio.h>
int main ()
{
    int number , multiplication ;
    printf("Enter which table you want me to print for you  : \n");
    scanf("%d",&number);
    for (int i = 1; i <= 10; i++)
    {
        multiplication = number * i;
        printf(" %d * %d = %d \n",number, i, multiplication );
    }
    return 0;
    
}
   