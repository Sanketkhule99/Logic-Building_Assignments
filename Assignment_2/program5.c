#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
    {
        if(iNo % 2 == 0)
        {
            return TRUE;
        }
        
        else                                   //logic
        {
            return FALSE;
        }
    }
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number : ");
    scanf("%d" ,&iValue);
    bRet = ChkEven(iValue);
    if(bRet == TRUE)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }
    return 0;
}