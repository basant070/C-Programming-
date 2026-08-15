// this program multiply two matrix

#include <stdio.h>
void mult2darray(int[][10], int[][10], int[][10], int, int, int);
int main()
{
    int i, j, k, r1, r2, c1, c2, A[10][10], B[10][10], C[10][10];
    printf("Enter row of matrix A : ");
    scanf("%d", &r1);
    printf("Enter column of matrix A : ");
    scanf("%d", &c1);
    printf("Enter row of matrix B: ");
    scanf("%d", &r2);
    printf("Enter  column of matrix B: ");
    scanf("%d", &c2);
    printf("\n=======================================\n");
    if (c1 == r2)
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
        mult2darray(A, B, C, r1, c1, c2); // function call
        printf("\n=======================================\n");
        printf("\n Multiplication of both matrix is :\n");
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c1; j++)
            {
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
};

void mult2darray(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2)
{
    int i, j, k, sum;
    for (i = 1; i <= r1; i++)
    {

        for (j = 1; j <= c2; j++)
        {
            sum = 0;
            for (k = 1; k <= c1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
                C[i][j] = sum;
            }
        }
    }
}