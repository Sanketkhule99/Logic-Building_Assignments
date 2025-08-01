//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Accept N numbers from user and check whether number 11 is present or not.
//Author :      Sanket Khule           
//Date :        29-07-22
//Input :       N : 6
//              Elements :85 66 11 80 93 88
//Output :      11 is present
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define False 0
#define True 1 

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{

    int iCnt = 0;
    
    

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]   == 11)
        {
            return True;
        }
         
            
    }
    return False;
    

}
int main()
{

 int iSize = 0;BOOL bRet = False;int iCnt = 0;
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
 bRet = Check (p , iSize);

 if (bRet == True)
 {
    printf("The number __11__  is present ");
 }
 else
 {
     printf("The number __11__  is not  present ");
 }
  
 free(p);

 return 0;
}
