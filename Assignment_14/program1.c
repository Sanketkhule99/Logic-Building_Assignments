#include<stdio.h>

void Display(int iRow,int iCol)
{
  int i = 0;
  int j = 0;
  int k = 1;

 for ( i = 0; i < iRow; i++)
 {
    for ( j = 0; j < iCol; j++)
    {
        if ( 10 > k   &&   k >= 1)
        {
            printf("%d\t",k);
            k++;
        }
        else
        {
            printf("%d\t",k);
            k++;
        }
        
        
    }
    printf("\n");
    
 }
  

}

int main()
{

 int iValue1 = 0;
  int iValue2 = 0;

  printf("Enter the rows :\n");
  scanf("%d",&iValue1);

  printf("Enter the col:\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);

  return 0;




}