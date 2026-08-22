#include<stdio.h>
#include<string.h>
void concatenateStrings(char str1[], char str2[]);
int main (){
    
    char str1[50], str2[50];
    printf("=============================================\n ");
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);
    printf("=============================================\n ");
    return 0;
}
void concatenateStrings(char str1[], char str2[]){
    int i = 0, j = 0;
    while(str1[i] != '\0'){
        i++;
    }
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}