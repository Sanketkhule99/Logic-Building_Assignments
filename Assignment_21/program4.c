//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program4.c
// Description :   Accept N numbers from user and display all such numbers which contain 3 digits.
// Author      :   Sanket Khule
// Date        :   29-07-25
// Input       :   N : 6
//                 Elements : 85 666 3 123 93 888
// Output      :   666 123 888
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void  digit(int Arr[],int iLength) //3 digit numbers
{
int iCnt = 0 ;


for ( iCnt = 0; iCnt < iLength; iCnt++)
{
    if (Arr[iCnt] < 1000  && Arr[iCnt]  > 99  )
   
    {
       printf("%d\t",Arr[iCnt]);        
    }
    
  
}

}

int main()
{
  int iSize = 0 ;int iCnt = 0,iValue =0;
  int *p = NULL;//int iRet =0;

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
   

    digit(p,iSize);

  //  printf("Three  digit the element  in the array is ");

    free(p);

    return 0;




}