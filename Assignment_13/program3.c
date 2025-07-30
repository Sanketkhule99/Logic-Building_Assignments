#include<stdio.h>

void Display(int iRow,int iCol)
{
  
    int i = 0;
    char ch1 ='\0';
    int j = 0;
    
  for ( i = 0,ch1= 'A'; i < iRow; i++,ch1++)
  {
     for ( j = 0; j < iCol; j++)
     {
        printf("%c\t",ch1);
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