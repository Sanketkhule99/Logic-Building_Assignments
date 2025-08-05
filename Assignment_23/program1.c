#include<stdio.h>

void DisplayASCII()
{
 int iCnt = 0;

 for ( iCnt = 0; iCnt < 255; iCnt++)
 {
    printf("%d\t %o\t %x\t %c\t %s\t",iCnt,iCnt,iCnt,iCnt,iCnt);
 }
 

}

int main()
{
  int iValue = 0;

  printf("Enter the Value :\n");
  scanf("%d",&iValue);

  DisplayASCII(iValue);

  return 0 ;




}