//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program1.c
// Description :   Accept N numbers from user and return the largest number.
// Author      :   Sanket Khule
// Date        :   1-08-25
//
// Input       :   N : 6
//                 Elements : 85 66 3 66 93 88
// Output      :   93
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
int iCnt = 0 ;
int iMax = 0;

for ( iCnt = 0; iCnt < iLength; iCnt++)
{
    if (Arr[iCnt]  > iMax)
    {
            iMax =Arr[iCnt];
    }
    
}

return iMax;


}

int main()
{
  int iSize = 0 ;int iCnt = 0,iValue =0;
  int *p = NULL;int iRet =0;

  printf("Enter the number of elements :");
  scanf("%d",&iSize);

  if (iSize < 0)
  {
      printf("the size is very less : ");
      return -1;
  }

  //step 1 : Allocate the memory

  p = (int*)malloc(iSize * (sizeof(int)));

   if (p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1 ;
    }

    
    printf("Enter the %d elements \n",iSize);

    for (int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
   

    iRet = Maximum(p,iSize);

    printf("Largest element in the array is %d",iRet);

    free(p);

    return 0;




}