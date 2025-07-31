#include<stdio.h>

void Display(int iRow,int iCol)                   //////next time 
{
  int i = 0;
  int j = 0;
  

 for ( i = 0; i <= iRow; i++)
 {
    if ( i % 2  == 0)
    {
        for ( j = 0; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t",j);

            }
            
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