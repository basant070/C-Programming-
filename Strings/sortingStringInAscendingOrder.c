#include<stdio.h>
#include<string.h>
int main ()
{
    void readStrings(char str[][50], int n);
    void sortStrings(char str[][50], int n);
    void displayStrings(char str[][50], int n);
    char str[50][50];
    int n, i;
    printf("=============================================\n");
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    readStrings(str, n);
    sortStrings(str, n);
    printf("Strings in ascending order:\n");
    displayStrings(str, n);
      printf("=============================================\n");
    return 0;
}
void readStrings(char str[][50], int n)
{
    int i;
    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
}
void sortStrings(char str[][50], int n)
{
    int i, j;
    char temp[50];
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
void displayStrings(char str[][50], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
};
