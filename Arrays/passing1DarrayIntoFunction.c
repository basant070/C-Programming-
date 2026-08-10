// this program shows how can we pass the array to the function :

#include <stdio.h>
void sortArray(int[], int);
void display(int[], int);
int main()
{
    int arr[20], temp, i, j, n;
    printf("Enter Array size less than 20 :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, n);
    display(arr, n);

    return 0;
}
void sortArray(int arr[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}
void display(int arr[], int n)
{
    printf("\n sorted array is :");
    for (int i = 0; i < n; i++)
    {
        printf(": %d", arr[i]);
    };
}