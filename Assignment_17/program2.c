//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Sanket Khule             
//Date :        18-06-25
//Input :       iRow = 4         iCol = 4
//Output :      *   *   *   #
//              *   *   #   @
//              *   #   @   @
//              #   @   @   @
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iRow, int iCol)
{
int i = 0, j= 0;                  // 11   12   1 3  14

for ( i = 1; i <= iRow; i++)
{
    for ( j =iCol; j >= 1; j--)
    {
        if (i == j)
        {
            printf("#\t");
        }
        else if( i <= j)
        {
             printf("*\t");
        }
        else
        {
            printf("@\t");
        }
        
    }
     printf("\n");


    
}


}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter the rows :\n ");
    scanf("%d",&iValue1);

     printf("Enter the Col:\n ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}