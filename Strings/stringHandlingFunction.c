#include<stdio.h>
#include<string.h>
int main (){
    char str1[50], str2[50], str3[40];
    printf("=====================strcat() function ========================\n ");
    printf("Enter first string: ");
   scanf("%s", str1);
    printf("\nEnter second string: ");
   scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    printf("===================strlen() function ========================\n ");
    printf("Enter  string: ");
    scanf("%s", str3);
    printf("Length of the string: %lu\n", strlen(str3));
      printf("==================strcpy() function ========================\n ");
      strcpy(str3, str1);
    printf("Copying third string into first string str1: %s\n", str3);
     printf("==================strcmp() function ========================\n ");
    int result = strcmp(str1, str2);
    printf("Comparison result str1 and str2: %d\n", result);
    printf("Lowercase of first string: %s\n", strlwr(str1));
    printf("Uppercase of second string: %s\n", strupr(str2));
    printf("Reversed first string: %s\n", strrev(str1));
        printf("=================== ========================\n ");

    return 0;
}