//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 
//Author :      Sanket Khule          
//Date :        18-06-25
//Input :       N : 6
//              Elements :85 66 3 80 93 88
//Output :      53 (234 - 181)
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdio.h>

int Difference(int Arr[],int iLength)
{


 int iodd = 0,iEven = 0,iDiff= 0,iCnt = 0;


 for ( iCnt = 0; iCnt < iLength; iCnt++)
 {
     if ((Arr[iCnt] % 2)  == 0)
     {
        iEven= iEven + Arr[iCnt];
     }
     else
     {
        iodd = iodd +Arr[iCnt];
     }

    iDiff = iodd -iEven ;
     return iDiff;
 }
 
}

int main ()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int*)malloc (iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for (iCnt = 0; iCnt<iSize ;iCnt++)
    {
        printf ("Enter element  %d : ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}