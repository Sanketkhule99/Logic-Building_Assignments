#include<stdio.h>

int Countless6(int iNo)
{

    if (iNo<0)
    {
        iNo = - iNo;
    }
    

int iDigit = 0;
int  iless = 0;

while (iNo != 0)
{
    iDigit = iNo % 10;

    if (iDigit < 6)
    {
        iless++;
    }
    iNo = iNo/10;
    
}
return iless;



}

int main()
{


     int  iValue = 0,iRet = 0;

     printf("Enter the digit :\n");
     scanf("%d",&iValue);

       iRet = Countless6(iValue);

       printf("The number of less than 6 are   the :%d",iRet);

     return 0;



}