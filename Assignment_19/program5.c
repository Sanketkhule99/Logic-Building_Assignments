//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Accept N numbers from user and accept one another number as NO,
//              return frequency of NO from it.
//Author :      SAnket Khule             
//Date :        22-06-25
//Input 1 :     N : 6
//              NO : 66
//              Elements : 85 66 3 66 93 88
//Output 1 :    2
//
//Input 2 :     N : 6
//              NO : 12
//              Elements : 85 11 3 15 11 111
//Output 2 :    0
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountNO(int Arr[],int iLength,int iNo)
{

    int iCnt = 0;
    int iCount = 0;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]    == iNo)
        {
            iCount ++;
        }
        
    }
    return iCount;


}
int main()
{

 int iSize = 0, iRet = 0, iCnt = 0;
 int *p = NULL; int iNo = 0;

 printf("Enter the number of elements :\n");
 scanf("%d",&iSize);

 printf("Enter the iNo :\n");
 scanf("%d",&iNo);


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
 iRet = CountNO(p , iSize,iNo);

    printf("The   frequency of %d are %d ", iNo,iRet);

    free (p);

    return 0;

}