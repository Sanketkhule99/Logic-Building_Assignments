//Print the pattern taking input from user
//Input : 5
//output : $ * $ * $ * $ * $ *



#include <stdio.h>


void Pattern(int iNo)
{
    int iCnt  = 0;

    
   if (iNo<0)
   {
    iNo = - iNo;
   }

   for ( iCnt = 0; iCnt <= iNo; iCnt++)
   {
    printf("*\t #\t");
    }
   
   
}


int main()
{
    int iValue = 0;
    printf("Enter The number : ");
    scanf("%d", &iValue);

    //Input 0 Handling
    if(iValue == 0)
    {
        printf("Dont you want dollar on screen");
    }

    else
    {
        Pattern(iValue);
    }

    return 0;
}

