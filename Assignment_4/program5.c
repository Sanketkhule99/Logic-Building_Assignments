//Program to give difference between summation of
//factors and non-factors of given number


#include <stdio.h>


int FactDiff(int iNo)
{
   
    int iCnt = 0;
     
    int iSumFact = 0;
    int iSumNonFact = 0;
    
    int iDiff = 0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    }

     
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

   /* for(iCnt <= (iNo/2); iCnt < iNo;  iCnt++)
    {
        iSumNonFact = iSumNonFact + iCnt;
    }*/

    // logic
    iDiff =  iSumFact- iSumNonFact ;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d", &iValue);

    
    if(iValue == 0)
    {
        printf("There Are no factors for value  : 0");

    }
    else
    {
        iRet = FactDiff(iValue);
        
        printf("Differnce between Summation of Factors and Non-Factors is : %d ", iRet);
    }

    return 0;
}