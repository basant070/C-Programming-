// can find the largest number entered in array

#include <stdio.h>
int main()
{
    int number, max;
    printf("Enter the elements you want to enter :");
    scanf("%d", &number);
    int arr[number];
    for (int i = 0; i <= number; i++)
    {
        printf("\nEnter %d element :", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i <= number; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\nLargest number is :%d", max);
    return 0;
}