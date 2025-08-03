//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program5.c
// Description :   Accept N numbers from user and return the product of all odd elements.
// Author      :  Sanket Khule 
// Date        :   29-07-25
//
// Input       :   N : 6
//                 Elements : 15 66 3 70 10 88
// Output      :   45
//
// Input       :   N : 6
//                 Elements : 44 66 72 70 10 88
// Output      :   0
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


 int ProdOdd(int Arr[], int iLength , int iValue)
{
    int iCnt = 0; int ipro = 1 , iCount = 0; 

    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if (Arr [iCnt] % 2 !=  0)
        {
            ipro = ipro * Arr[iCnt];
        }
        else
        {
            iCount++;
        }
        if (iCount == iLength)
        {
            return -1;
        }
        
        
    }
    return ipro;

}
 
int main ()
{
    int iCnt = 0 , iSize = 0 , iValue = 0 ;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    
    if (iSize < 0)
    {
        printf("The size is Too less");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));

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

    iRet = ProdOdd(p,iSize,iValue);

    if (iRet == -1  )
    {
        printf("Number is  0 ");
    }
    else 
    {
        printf("Product is  %d",iRet);
    }

    return 0;
}


