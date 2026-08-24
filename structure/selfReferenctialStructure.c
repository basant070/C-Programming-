//self referential structure is a structure that contains a pointer to the same structure type.
// It is used to create linked lists, trees, and other dynamic data structures.
// In this example, we define a self-referential structure called 'code' that contains an integer, a character, and a pointer to another 'code' structure.
// We then create two instances of this structure and demonstrate how to access their members.

#include<stdio.h>
struct code{
    int i;
    char c;
    struct code *ptr;
};
int main ()
{
    struct code c1;
    struct code c2;
    c1.i = 10;
    c1.c = 'A';
    c1.ptr = NULL;
    printf("%d\n", c1.i);
    printf("%c\n", c1.c);
    printf("%p\n", c1.ptr);
    c2.i = 20;
    c2.c = 'B'; 
    c2.ptr = NULL;
    printf("%d\n", c2.i);
    printf("%c\n", c2.c);
    printf("%p\n", c2.ptr);
    printf("\n %d%%c", c1.ptr->i, c1.ptr->c);
    return 0;
}