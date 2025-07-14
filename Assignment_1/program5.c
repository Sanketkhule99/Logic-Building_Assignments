#include <stdio.h>
  
void Accept (int iNo)
{
   
    int iCnt = 0;

    for ( iCnt = 0; iCnt < iNo; iCnt++)
    {                                         //Accept one number and print  no. of *  on screen
        printf("*\n");
    }
    
}

int main()
{
 int iValue = 0;
 iValue = 5;   //7

 Accept(iValue);
 return 0;


}