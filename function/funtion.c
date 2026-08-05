// function in c 
#include<stdio.h>
float area (float  , float ); // function decalaration 

int main ()
{
    float length , breadth;
    printf("\n Enter length :");
    scanf("%f", &length);
    printf("\n Enter breath :");
    scanf("%f",&breadth);
    area (length, breadth );
    return 0;
}
float area (float  a, float b) // function definition 
{
    float area;
    area = a * b;
    printf("AREA is : %f", area);
}