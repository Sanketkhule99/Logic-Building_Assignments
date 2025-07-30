#include<stdio.h>

int MultiDigits(int iNo)
{
   int iCnt = 0;
   int MUlti = 1;
   int iDigit = 0;


   while (iNo != 0)
   {
      iDigit = iNo %10;

      if (iDigit != 0)
      {
         MUlti = MUlti *iDigit;
      }
      
       iNo = iNo / 10;

       iCnt++;
      
   }
   
  return MUlti;
}

int main()
{


       int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : " );
    scanf("%d" , &iValue);

    iRet = MultiDigits(iValue);
    printf("multiplication of the number  is : %d" , iRet);

    return 0;
}