// Given program illurates formatted and unformatted input and output functions 

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main ()
{
    int a ;
    char ch, str[50] ;
   
    
    printf("\n=====================================================");
    printf("=====formatted input and output function ======\n");
                printf("Enter a Integer :");// formatted output function
                scanf("%10d",&a);           // formatted input function 
                printf("\n a = %d",a);     
                printf("\n Enter a character: ");
                scanf(" %c",&ch);
                printf("\n Entered character ch = %c",ch);
                printf("\nEnter your full name : ");
                scanf(" %[^\n]",str);     // [^\n] we use this format specifier to print  string since scanf don't print whitespace !
                printf("\n Name :%s",str);

      printf("\n=====================================================");
      printf("\n=====unformatted input and output function ======\n");
                printf("\n Enter a character :");
                //ch = getchar(); 
                ch = getch();
               // ch = getche(); 
                printf("\nCharacter is : ");
                putchar(ch);
               // putch(ch);
                printf("\n Enter a string :");
                gets(str);
                printf("\n String : ");
                puts(str);
    printf("\n=====================================================");
    return 0;
}