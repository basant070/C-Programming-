// given program illustrates about datatypes  
#include<stdio.h>
int main ()
{

    int a=1, b=3, c=7;
    float d=3.14;
    char name[10] = "Basant";
    int array[5] = {1,2,3,4,5}; //array
    enum weekdays{Sunday, monday, tuesday, wednesday, thursday,friday,saturday};
    typedef char chara ;
    chara cat ='A'; 
    
    printf("===========================================\n");
    printf("%d is integer type of data !\n",c);
    printf("%f is floating  type of data !\n",d);
    printf("%s: is character type of data !\n",name);
    printf("\nEnumerator datatype : %d %d %d %d %d %d %d ",Sunday, monday, tuesday, wednesday, thursday,friday,saturday);
    printf("\nThis is array datatype :");   
    for (int i = 0; i < 4; i++)
    {
        printf("%d \t",array[i]);
    };
    printf("\nTypedef type :%c",cat);
    printf("\n===========================================");
   
    return 0;
}