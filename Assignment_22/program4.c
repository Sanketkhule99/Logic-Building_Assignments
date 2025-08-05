//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program4.c
// Description :   Accept the charchter from user and check wheter is capital or not
// Author      :   Sanket Khule
// Date        :   1-08-25
// Input       :   N : s
//                 Elements : a to z 
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

  if ( ch >= 'a' && ch <= 'z')
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
        printf("It is Small  letter ");

    }
    else
    {
        printf("It is not small lettter  ");
    }


    return 0;
}





    
