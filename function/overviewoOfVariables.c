// this program shows the use of local, global , static and register variables 

#include <stdio.h>

// Global variable
int globalVar = 100;

// Function to demonstrate static variable
void display()
{
    // Static variable
    static int staticVar = 0;

    staticVar++;
    printf("Static Variable = %d\n", staticVar);
}

int main()
{
    // Local variable
    int localVar = 50;

    // Register variable
    register int registerVar;

    printf("Global Variable = %d\n", globalVar);
    printf("Local Variable = %d\n", localVar);

    printf("\nRegister Variable Values:\n");
    for (registerVar = 1; registerVar <= 5; registerVar++)
    {
        printf("%d ", registerVar);
    }

    printf("\n\nCalling display() function:\n");

    display();
    display();
    display();

    return 0;
}
/*

 OUTPUT
 ===========
Global Variable = 100
Local Variable = 50

Register Variable Values:
1 2 3 4 5

Calling display() function:
Static Variable = 1
Static Variable = 2
Static Variable = 3

*/