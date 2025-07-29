#include<stdio.h>

double SquareMeter( int iNo)
{
// 1 sq f = 0.0929 m
 
 double meter = 0.0;

 meter = 0.0929 * iNo;

return meter;

}

int main() 
{ 
      int  iValue = 0.0; 
    double Ret = 0.0; 
 

    printf("Enter feet that you want to calculate \n"); 
    scanf("%d",&iValue); 

    Ret = SquareMeter(iValue);
    printf("The squaremeter is the  %d",Ret); 
    return 0;
} 