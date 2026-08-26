#include <stdio.h>
#include <stdlib.h>

int main() {

    // 1. NULL POINTER
    int *nullPtr = NULL;

    if (nullPtr == NULL) {
        printf("Null Pointer: It points to nothing.\n");
    }


    // 2. VOID POINTER
    int num = 100;
    void *voidPtr = &num;

    printf("Void Pointer: %d\n", *(int *)voidPtr);


    // 3. BAD / DANGLING POINTER
    int *badPtr = (int *)malloc(sizeof(int));

    *badPtr = 50;
    printf("Before free: %d\n", *badPtr);

    free(badPtr);      // Memory is released

    badPtr = NULL;     // Prevents dangling/bad pointer usage

    if (badPtr == NULL) {
        printf("Bad/Dangling Pointer avoided by setting it to NULL.\n");
    }

    return 0;
}