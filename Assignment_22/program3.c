//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program3.c
// Description :   Accept the charchter from user and check wheter digit or 
// Author      :   Sanket Khule
// Date        :   1-08-25
// Input       :   N : F
//                 Elements : A to Z 
// Output      :   present 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL chkCapital(char ch)
{
  BOOL Check = FALSE;

  if ( ch >= '0' && ch <= '9')
  {
     Check = TRUE;
  }
  else
  {
    Check = FALSE;
  }

  return Check;
  
}

int main()
{
 char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your character : ");
    scanf("%c",&cValue);

    bRet = chkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit ");

    }
    else
    {
        printf("It is not a digit ..");
    }


    return 0;
}





    
