#include<stdio.h>

void Display(int iRow,int iCol)
{
  int i = 0;
  int j = 0;
//char  k = 'a';


 for ( i = 1; i <= iRow; i++)
 {
      
     if (( i % 2) != 0 )
     {
        for ( j = 1; j <= iRow; j++)
        {
            printf("%d\t",j);
            
            
        }
        
     }
     else
     {
        for ( j =- 1; j >= -iCol; j--)
        {
            printf("%d\t",j);
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