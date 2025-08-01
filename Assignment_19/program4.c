//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept N numbers from user and return frequency of 11 form it.
//Author :      Sanket Khule         
//Date :        29-07-25
//Input :       N : 6
//              Elements :85 66 3 80 93 88          : 85 11 3 15 11 111
//Output :      0                                     2
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountELeven(int Arr[],int iLength)
{

    int iCnt = 0;
    int iCount = 0;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]  %  11  == 0)
        {
            iCount ++;
        }
        
    }
    return iCount;


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
 iRet = CountELeven (p , iSize);

    printf("There are %d  11's numbers  ", iRet);

    free (p);

    return 0;

}