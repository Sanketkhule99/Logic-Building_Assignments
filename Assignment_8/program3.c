////////////////////////////////////////////////////////////////////////////////////////////
//Author : Sanket Santosh Khule
//Description :  program which accept distance in kilometre and convert it into meter.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>


int KmToMetre(int iNo)
{
    int iMetre = 0;
    iMetre = iNo * 1000;

    return iMetre;
}


int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter The Number in KM : ");
    scanf("%d",&iValue1);


    iRet = KmToMetre(iValue1);

    printf("Area Of Given Circle is %d",iRet);
    
    return 0;
}

//Time Complexity : O(1)