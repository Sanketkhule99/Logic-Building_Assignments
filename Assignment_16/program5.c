//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Sanket khule              
//Date :        14-06-25
//Input :       iRow = 4         iCol = 4
//Output :      1       2       3       4
//                      2       3       4
//                              3       4
//                                      4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iRow,int iCol)
{
  int i = 0 ;
  int j = 0;
  int iNo = 1;

  for ( i = 1; i <= iRow; i++)
  {
     for ( j = 1; j <=iCol; j++,iNo++)
     {
        if ( i <= j)
        {
            printf("%d\t",iNo);
        }
        else
        {
         printf("\t");

        }  
     }
     iNo = 1;
     printf("\n");
    }
  


}

int main()
{
 int iValue1 =0;
 int iValue2 = 0;

 printf("Enter the Rows :\n");
 scanf("%d",&iValue1);

 printf("Enter the Col :\n");
 scanf("%d",&iValue2);

 Display(iValue1,iValue2);

 return 0;
}