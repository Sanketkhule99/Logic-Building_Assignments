//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program5.c
// Description :   Accept division of student from user and depends on the division 
//              display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
//              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// Author      :   Sanket Khule
// Date        :   1-08-25
// Input       :   N : s
//                 Elements : a to z 
// Output      :   present 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplaySch(char ch)
{
  

  if ( ch == 'a' || ch == 'A')
  {
     printf("Exam of Divison A is at 7 Am....");
  }
  else if(ch == 'b' || ch == 'B')
  {
     printf("Exam of Divison B is at 8.30 Am....");
  }
  else if (ch == 'c' || ch == 'C')
  {
   printf("Exam of Divison B is at 9.20 Am....");
  }
  else if (ch == 'd' || ch == 'D')
  {
   printf("Exam of Divison B is at 10.30 Am....");
  }
  
  
}

int main()
{
 char cValue = '\0';
    

    printf("Enter your character : ");
    scanf("%c",&cValue);

     DisplaySch(cValue);

    return 0;
}





    
