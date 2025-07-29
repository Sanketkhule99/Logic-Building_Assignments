#include<stdio.h>

double FhotoCs( float ftemp)
{


    double celcius = ((ftemp - 32) * (5.0/9.0));
    

   return celcius;
}

int main() 
{ 
    float fValue1 = 0.0; 
    double Ret = 0.0; 
 

    printf("Enter temperature in Fahrenheit: \n"); 
    scanf("%f",&fValue1); 

    Ret = FhtoCs(fValue1);
    printf("The tempreture in celcius is : %lf",Ret); 
    return 0;
} 