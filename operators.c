
//Program using all the operators 
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    int a = 10, b = 3;
    int result;

    printf("=== ARITHMETIC OPERATORS ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("======Note : 1 stands for TRUE and 0 stands for FALSE ========");
    printf("\n=== RELATIONAL OPERATORS ===\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    printf("\n=== LOGICAL OPERATORS ===\n");
    printf("(a>5) && (b>1) : %d\n", (a > 5) && (b > 1));
    printf("(a>5) || (b>10): %d\n", (a > 5) || (b > 10));
    printf("!(a>5)         : %d\n", !(a > 5));

    printf("\n=== BITWISE OPERATORS ===\n");
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", ~a);
    printf("a << 2 = %d\n", a << 2);
    printf("a >> 2 = %d\n", a >> 2);

    printf("\n=== ASSIGNMENT OPERATORS ===\n");
    result = a;
    printf("result = a       : %d\n", result);
    result += b; printf("result += b      : %d\n", result);
    result -= b; printf("result -= b      : %d\n", result);
    result *= b; printf("result *= b      : %d\n", result);
    result /= b; printf("result /= b      : %d\n", result);
    result %= b; printf("result %%= b      : %d\n", result);
    result <<= 1; printf("result <<= 1     : %d\n", result);
    result >>= 1; printf("result >>= 1     : %d\n", result);
    result &= b; printf("result &= b      : %d\n", result);
    result |= b; printf("result |= b      : %d\n", result);
    result ^= b; printf("result ^= b      : %d\n", result);

    printf("\n=== INCREMENT / DECREMENT OPERATORS ===\n");
    int x = 5;
    printf("x++ : %d (x becomes %d)\n", x++, x);
    printf("++x : %d (x becomes %d)\n", ++x, x);
    printf("x-- : %d (x becomes %d)\n", x--, x);
    printf("--x : %d (x becomes %d)\n", --x, x);

    printf("\n=== CONDITIONAL (TERNARY) OPERATOR ===\n");
    int max = (a > b) ? a : b;
    printf("max of a,b = %d\n", max);

    printf("\n=== COMMA OPERATOR ===\n");
    int p, q;
    p = (q = 5, q + 10);
    printf("p = %d, q = %d\n", p, q);

    printf("\n=== SIZEOF OPERATOR ===\n");
    printf("sizeof(int)    = %lu\n", sizeof(int));
    printf("sizeof(float)  = %lu\n", sizeof(float));
    printf("sizeof(double) = %lu\n", sizeof(double));
    printf("sizeof(char)   = %lu\n", sizeof(char));

    printf("\n=== POINTER OPERATORS (& and *) ===\n");
    int num = 100;
    int *ptr = &num;
    printf("Address of num : %p\n", (void*)&num);
    printf("Value via ptr  : %d\n", *ptr);

    printf("\n=== MEMBER ACCESS OPERATORS (. and ->) ===\n");
    struct Point pt = {5, 10};
    struct Point *pptr = &pt;
    printf("pt.x = %d, pt.y = %d\n", pt.x, pt.y);
    printf("pptr->x = %d, pptr->y = %d\n", pptr->x, pptr->y);

    printf("\n=== CAST OPERATOR ===\n");
     printf("\n=== EXPLICIT TYPE CONVERSION  ===\n");
    float f = 9.7;
    int i = (int)f;
    printf("float f = %.2f, (int)f = %d\n", f, i);


    return 0;
}