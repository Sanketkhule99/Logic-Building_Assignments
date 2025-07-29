
#include <stdio.h>


int SummationNonFact(int iNo)
{
    int iCnt = 0;

    int iSum = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 1; iCnt <= (iNo); iCnt ++ )
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }

    }
    
    
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d" , &iValue);


   
        iRet = SummationNonFact(iValue);
        printf("The Summation of Non Factors is : %d" , iRet);


    

    return 0;
}