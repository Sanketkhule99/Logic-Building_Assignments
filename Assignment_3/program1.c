
// Program1 : Take a number from user and display even
//            numbers 





#include <stdio.h>

void DisplayEven(int iNo)
{

    
    if(iNo < 0)
    {
         return  iNo =  - iNo ;
    }
     
     int iCnt = 0;

    //For loop  
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
          //It will intialize with one and get even no as basis of input no. 
      printf(" %d",iCnt * 2);
    }

    

}

int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d" , &iValue);

    DisplayEven(iValue);



    return 0;
}