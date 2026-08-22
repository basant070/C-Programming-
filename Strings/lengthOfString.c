#include<stdio.h>
int stringLength(char str[]);
int main (){
    char str[100];
    printf("=============================================\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = stringLength(str);
    printf("Length of the string: %d\n", length);
    printf("=============================================\n");
    return 0;
}
int stringLength(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length - 1; // Subtracting 1 to exclude the newline character from fgets
}