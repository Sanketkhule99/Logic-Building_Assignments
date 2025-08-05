//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program2.c
// Description :   Accept the charchter from user and check wheter is capital or not
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

  if ( ch >= 'A' && ch <= 'Z')
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
        printf("It is Capital letter that  what we want");

    }
    else
    {
        printf("It is not Captial lettter  that what we not want");
    }


    return 0;
}





    
