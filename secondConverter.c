#include<stdio.h>
int main ()
{
    int hour, minute, seconds, inputSecond;
    printf("====================================\n");
    printf("Enter time in seconds : ");
    scanf("%d",&inputSecond);
    hour = inputSecond/3600;
    minute = (inputSecond % 3600)/60;
    seconds = (inputSecond % 3600) %60;
    
    printf("\n %d hour %d minutes and %d seconds ",hour, minute, seconds);
    printf("\n====================================\n");

    return 0;

}