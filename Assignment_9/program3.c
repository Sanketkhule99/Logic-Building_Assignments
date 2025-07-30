#include<stdio.h>

int  CountTwo(int iNo)
{

    int iDigit = 0,iFqr= 0;
   if (iNo< 0)
   {
     iNo = - iNo;
   }

   while (iNo != 0)
   {
    iDigit = iNo %10;

    if (iDigit == 2 )
    {
     iFqr++;   
    }
    
    iNo = iNo /10;

   }
   return iFqr;
   }

 int main()

   {
     int  iValue = 0,iRet = 0;

     printf("Enter the digit :\n");
     scanf("%d",&iValue);

       iRet = CountTwo(iValue);

       printf("The number of two's are the :%d",iRet);

     return 0;



   }
   
   




