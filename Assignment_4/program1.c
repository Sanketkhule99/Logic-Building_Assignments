////////////////////////////////////
//Program to find multiplication
//of factors of given number
////////////////////////////////////

#include<stdio.h>

//Function
int DisplayMulFactors(int iNo)
{

    int iCnt = 0;
     
    int mul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   //Logic
    for(iCnt = 1; iCnt < (iNo ); iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            mul = mul * iCnt;
        }
    }
    return mul;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet = DisplayMulFactors(iValue);
    
    
   printf("Multiplication Of factors of given number is : %d" , iRet);
    

    return 0;
    


}