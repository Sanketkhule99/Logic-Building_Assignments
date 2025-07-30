#include<stdio.h>

int CountFour(int iNo)
{

    if (iNo<0)
    {
        iNo = - iNo;
    }
    

int iDigit = 0;
int  ifeq = 0;

while (iNo != 0)
{
    iDigit = iNo % 10;

    if (iDigit == 4)
    {
        ifeq++;
    }
    iNo = iNo/10;
    
}
return ifeq;



}

int main()
{


     int  iValue = 0,iRet = 0;

     printf("Enter the digit :\n");
     scanf("%d",&iValue);

       iRet = CountFour(iValue);

       printf("The number of four's are the :%d",iRet);

     return 0;



}