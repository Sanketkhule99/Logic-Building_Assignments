#include<stdio.h>

int CountOdd(int iNo)
{

    int iDigit = 0;
    int Countodd = 0;

    if (iNo<0)
    {
        iNo = - iNo;
    }
    

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2 ) != 0)
        {
            Countodd++;
        }
        iNo = iNo / 10;

    }
    return Countodd;


}

int main()
{
 int iValue = 0;
 int iRet = 0;

 printf("Enter the number:\n");
 scanf("%d",&iValue);

 iRet = CountOdd(iValue);

 printf("The odd number are the :%d",iRet);



}