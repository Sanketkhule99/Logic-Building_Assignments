//marvellous  -5 
#include<stdio.h>

int Countsmall(char *str)
{
    int iCountSmall = 0;

    while(*str != '\0')
    {
       if (*str >= 'a'    &&   *str <= 'z')
       {
         iCountSmall++;
       }
       str++;
    }

    return iCountSmall;
}

int main()
{
    char Arr[20] ;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Countsmall(Arr);
    
    printf("Number of capitals letters are : %d\n",iRet);

    return 0;
}