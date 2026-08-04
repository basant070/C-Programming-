// programs shows ifelse statement and nested if else statement 
/** 
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        if (number %2  == 0)
        {
           printf("%d number is even. \n", number);  
        }
        else
        {
            printf("%d number is odd. \n", number);
        }
       printf(" and %d is positive.\n", number);
    } 
    else if (number < 0) {
        printf("%d is negative.\n", number);
    }
    else {
        printf("The number is zero.\n");
    }

    return 0;
}*/

#include<stdio.h>
int main ()
{
    int number , multiplication ;
    printf("Enter which table you want me to print for you  : \n");
    scanf("%d",number);
    for (int i = 0; i < 10; i++)
    {
        multiplication = number * i;
        printf(" %d * %d = %d \n",number, i, multiplication );
    }
    return 0;
    
}