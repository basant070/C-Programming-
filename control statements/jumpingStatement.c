//Jumping statements : goto, continue, break;
#include <stdio.h>

int main() {
    int i;

    // ---- continue example ----
    printf("Continue example (skip even numbers):\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // skips the rest of this iteration, goes to next i
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // ---- break example ----
    printf("Break example (stop at first number divisible by 7):\n");
    for (i = 1; i <= 20; i++) {
        if (i % 7 == 0) {
            printf("Found: %d\n", i);
            break;  // exits the loop immediately
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // ---- goto example ----
    printf("Goto example (jump past a section):\n");
    i = 1;

start:
    if (i > 5) {
        goto end;  // jump straight to the 'end' label
    }
    printf("%d ", i);
    i++;
    goto start;   // jump back to 'start' label

end:
    printf("\nReached end using goto.\n");

    return 0;
}