//Print the number line taking input from user
//Input :
//output :



#include <stdio.h>


void Display(int iNo)
{
    int iCnt  = 0;

   
  /* if(iNo<0)
    {
        for(iCnt = -1; iCnt >= iNo; iCnt--)
        {
            printf("%d ", iCnt);
        }
    }

    else
    {
        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            printf("%d ", iCnt);
        }
    }*/


     for ( iCnt = -iNo; iCnt <= iNo; iCnt++) if(iNo < 0)
    {
        printf("%d\t",iCnt);
    }
        
    }



int main()
{
    int iValue = 0;
    printf("Enter The number : ");
    scanf("%d", &iValue);

   
    
    Display(iValue);
    

    return 0;
}

