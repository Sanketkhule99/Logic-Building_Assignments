//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept N numbers from user and return difference between frequency of even number and odd numbers.
//Author :      Akshay Patil             
//Date :        22-06-25
//Input :       N : 7
//              Elements :85 66 3 80 93 88  90
//Output :      3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{

    int iCnt = 0;
    int iCount1Even = 0;
    int iDiff = 0;
    int iCount2Odd = 0;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]  %  2  == 0)
        {
            iCount1Even ++;
        }
        else 
        { 
            iCount2Odd++;
        }
        
        iDiff =    iCount1Even - iCount2Odd ;

        
    }
    return iDiff;
    

}
int main()
{

 int iSize = 0, iRet = 0, iCnt = 0;
 int *p = NULL;

 printf("Enter the number of elements :\n");
 scanf("%d",&iSize);

 //step  1 : Allocate the memory
p = (int*)malloc(iSize  * (sizeof(int)));

 if (p == NULL)
 {
    printf("Enter the number of elements :\n");
    return 1;
 }

 printf("Enter %d elements in the:\n ",iSize);

 for ( iCnt = 0; iCnt < iSize; iCnt++)
 {
     printf("Enter the element %d :",iCnt+1);
     scanf("%d",&p[iCnt]);

 }
 iRet = CountEven (p , iSize);

    printf("Difference between their frequency are  %d :  ", iRet);

    free (p);

    return 0;

}