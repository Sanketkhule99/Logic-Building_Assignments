#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int  BOOL;

BOOL CheckZero(int iNo)
{
   BOOL bChecker = FALSE;
   int iDigit = 0;

   while (iNo  !=0)
    
   {
    iDigit = iNo % 10;
    if (iDigit == 0)
    {
        bChecker = TRUE;
    }

    iNo = iNo /10;
    
   }

   return bChecker;

}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    printf("Value of Output: %d\n",bRet);
    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It does not contain zero");
    }
}


