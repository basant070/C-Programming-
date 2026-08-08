#include<stdio.h>
int main ()
{
    int number, sum =0;
    printf("Enter the no. of elements : \n");
    scanf("%d",&number);
    int arr [number];
    for (int i = 0; i < number; i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&arr[i]);
        printf("\n");
        sum+= arr[i];
      
    }
      printf("sum is %d",sum);
      int avg = sum/ number;
      printf("\n Average is : %d",avg);
      return 0;
    
    
}