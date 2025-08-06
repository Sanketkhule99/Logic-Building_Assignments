//demo - yes
#include<stdio.h>
#include<stdbool.h>
#define True 1
#define False 0
typedef int BOOL;

bool chkvowels(char *str)
{
    BOOL bChekv= false;

    while(*str != '\0')
    {
       if (*str == 'a'  ||  *str =='e' || *str == 'i' || *str =='i' || *str <= 'u')
       {
         return True;
       }
       str++;
      
}
     return bChekv ;

}

int main()
{
    char Arr[20] ;
    BOOL bRet = False;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = chkvowels(Arr);
    if (bRet == True)
    {
        printf("The string present the vowels\n ");
    }else
    {
        printf("The string not  present the vowels\n");
    }
    

    return 0;
}