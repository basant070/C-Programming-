#include<stdio.h>
int main ()
{
    int a, b, t;
    printf("=======================================");
    printf("\nEnter two Integers :");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping a = %d and b =%d ",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nAfter swapping a = %d and b = %d",a, b);
    printf("\n=======================================");


    return 0;
}