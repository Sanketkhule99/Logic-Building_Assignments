
////////////////////////////////////////////////////////////////////////////////////////////
//Author : 
//Description : Write a program which accept number from user and display its table.  
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
void RevTable(int iNo)
{
    int iCnt = 0;
   
    //For loop for counter to iterate throungh 1 to 11
    for(iCnt = 11; iCnt >= 1; iCnt--)
    {
        printf("%d ",iNo *iCnt);   
    }

   
}

//Main Function
int main()
{
    int iValue = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    RevTable(iValue);

    return 0;
}

//Time Complexity : O(N)
