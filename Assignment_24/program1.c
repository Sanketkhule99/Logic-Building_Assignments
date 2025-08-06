//INDIA  -5 
#include<stdio.h>

int CountCapital(char *str)
{
    int iCountCap = 0;

    while(*str != '\0')
    {
       if (*str >= 'A'    &&   *str <= 'Z')
       {
         iCountCap++;
       }
       str++;
    }

    return iCountCap;
}

int main()
{
    char Arr[20] ;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    
    printf("Number of capitals letters are : %d\n",iRet);

    return 0;
}