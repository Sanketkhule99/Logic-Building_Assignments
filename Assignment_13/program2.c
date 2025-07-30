#include<stdio.h>

void Display(int iRow,int iCol)
{
  
    int i = 0;
    char ch1 ='\0';
    char ch2 ='\0';
    int j = 0;
    
  for ( i = 0; i < iRow; i++)
  {
    if (i % 2 == 0)
    {
        for ( j = 0,ch1 = 'a'; j < iCol; j++,ch1++)
        {
            printf("%c\t",ch1);
        } 
    }
    else
    {
        for ( j = 0,ch2 = 'A'; j < iCol; j++,ch2++)
        {
            printf("%c\t",ch2);
        }
        
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