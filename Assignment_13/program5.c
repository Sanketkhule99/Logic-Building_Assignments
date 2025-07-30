#include<stdio.h>

void Display(int iRow,int iCol)
{
  
    int i = 0;
    int j = 0, k = 0;
    
  for ( i = 0; i < iRow; i++)
  {
     for ( j = 0; j < iCol; j++)
     {
        printf("%d\t",k);
        k++;
     }
      
      
     printf("\n");

  }
  

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;


    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of col :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;





}