// addition of two dimensional array

#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], r1, r2, c1, c2, i, j;
    printf("Enter row of matrix A : ");
    scanf("%d", &r1);
    printf("Enter column of matrix A : ");
    scanf("%d", &c1);
    printf("Enter row of matrix B: ");
    scanf("%d", &r2);
    printf("Enter  column of matrix B: ");
    scanf("%d", &c2);
    printf("\n=======================================\n");
    if (r1 == r2 && c1 == c2)
    {

        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                printf("matrix A Element of  %d row and %d column : ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\n=======================================\n");
        for (i = 1; i <= r2; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                printf("matrix B Element of  %d row and %d column : ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
        printf("\n=======================================\n");
        printf("\n Addition of both matrix is :\n");
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("\t %d", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n Array size mismatched !");
    }
    return 0;
}
