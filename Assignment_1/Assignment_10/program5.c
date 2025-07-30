
#include <stdio.h>

int CountDiff(int iNo)
{
    int iCnt = 0 ;
     int iDigit = 0 ;
    int iOdd= 0,iEven = 0,iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //for odd

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit %2  != 0)
        {
            iOdd++;
        }
        else if (iDigit %2 == 0 )//else
        {
            iEven++;//even ++
        }
        
        iNo = iNo /10;
       iCnt++;
    }
    iDiff = iEven - iOdd;
    return iDiff;

}
int main()
{


       int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : " );
    scanf("%d" , &iValue);

    iRet = CountDiff(iValue);
    printf("diffrence of the  count number  is : %d" , iRet);

    return 0;
}
    