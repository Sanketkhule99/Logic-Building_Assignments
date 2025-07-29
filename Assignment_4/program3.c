

#include <stdio.h>


void DisplayNonFact(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }

  //for(iCnt > (iNo/2); iCnt < iNo; iCnt++)
  ///  {
     //   printf("%d ",iCnt);
    //}

}


int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d" , &iValue);

   
    
        DisplayNonFact(iValue);
    
    return 0;
}