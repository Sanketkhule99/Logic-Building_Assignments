#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

BOOL Check(int iNo)
{                                 //Accept no. and check divissible by 5 or not
   if ((iNo %  5 )==0)
   {
      return TRUE;
   }
   else
   {
    return FALSE;
   }
}

int main()
{
  int iValue  = 0;
  BOOL bRet = FALSE;

  printf("Enter the number:");
  scanf("%d\n",&iValue);

  bRet = Check(iValue);

  if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
   
  return 0;


}