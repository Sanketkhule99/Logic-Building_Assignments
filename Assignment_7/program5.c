#include <stdio.h>

//Helper Function
int FactorialDiff(int iNo)
{
    //variable creation
    int iFact1 = 1;
    int ifact2 = 1;
    int iCnt = 0;
    int Diff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //For loop for odd factorial
    for(iCnt = 1; iCnt <= iNo; iCnt ++ )
    {
        if((iCnt%2)!=0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }

    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iCnt % 2)  == 0)
        {
           ifact2 = ifact2 * iCnt;

        }
    }

        Diff = ifact2- iFact1;//even - odd
        
    }

    int main()
    {
      
        
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);

   
    
    iRet = FactorialDiff(iValue);

    printf("Diffrence between odd and even is :%d",iRet);

    return 0;





    }
    