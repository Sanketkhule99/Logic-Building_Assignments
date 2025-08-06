//MarvellouS   (8-2) = 6
#include<stdio.h>

int DiffFreq(char *str)
{
    int iCountSmall = 0;int Diff =0;int iCountCap =0;

    while(*str != '\0')
    {
       if (*str >= 'a'    &&   *str <= 'z')
       {
         iCountSmall++;
       }
       else if (*str >= 'A'    &&   *str <= 'Z')
       {
         iCountCap++;
       }
       str++;
    }

    Diff = iCountSmall - iCountCap;
}

int main()
{
    char Arr[20] ;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = DiffFreq(Arr);
    
    printf("Difference between capital letters and small letters : %d\n",iRet);

    return 0;
}