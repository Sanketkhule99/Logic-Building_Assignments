#include<stdio.h>

int DollertoINR(int iNo)
{
  int ruppes = 0;

   ruppes = iNo * 80;
 
  return ruppes;

}


int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the amount in  $ doller\n");
  scanf("%d\n",&iValue);

  iRet = DollertoINR(iValue);

  printf("the conversion is the int ruppes &%d",iRet);

  return 0;


}