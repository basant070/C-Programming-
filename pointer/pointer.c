#include<stdio.h>
int main ()
{
    int a = 10, *ptr;
    ptr = &a; // pointer to integer
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    return 0;
}