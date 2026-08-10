
// INSERTING A ELEMENT IN A DESIRED POSITION OF THE ARRAY

#include <stdio.h>
#define max_size 100
int main()
{
    int size, i, posi, num, arr[max_size];
    printf("===========================================\n");
    printf("Enter the size of array :");
    scanf("%d", &size);
    printf("\n Input Elements :");
    for (i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i);
        scanf("%d", &arr[i]);
    }
    printf("===========================================\n");
    printf("Elements before :");
    for (i = 0; i < size; i++)
    {
        printf(" %d :", arr[i]);
    }
    printf("\nEnter position  you want to insert :");
    scanf("%d", &posi);
    printf("\nEnter number  you want to insert in %d position  :", posi);
    scanf("%d", &num);

    if (posi > size + 1 || posi < 0)
    {
        printf("\n Invalid poistion please enter position between 0 and %d :", size);
    }
    else
    {
        for (i = size; i >= posi; i--)
        {
            arr[i] = arr[i - 1];
        }
    }
    arr[posi - 1] = num;
    size++;
    printf("\n Elements after :");
    for (i = 0; i < size; i++)
    {
        printf(" %d :", arr[i]);
    }

    return 0;
}