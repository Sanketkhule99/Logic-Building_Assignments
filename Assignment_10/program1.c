#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int CountEven = 0;

    while (iNo != 0)
    {
         iDigit = iNo % 10;

         if ((iDigit %2 )== 0)
         {
            CountEven++;
         }
          iNo = iNo / 10;

    }
    return CountEven;



}

int main()
{
 int iValue = 0;
 int iRet = 0;

 printf("Enter the number:\n");
 scanf("%d",&iValue);

 iRet = CountEven(iValue);

 printf("The even number are the :%d",iRet);



}