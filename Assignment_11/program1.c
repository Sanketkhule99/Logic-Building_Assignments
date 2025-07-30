#include<stdio.h>

void Display(int iNo)
{

int iCnt = 0;
char ch = 'A';

for ( iCnt = 1; iCnt <= iNo; iCnt++)
{
    printf("%c",ch);
    ch++;
}
}

int main()
{
    int iValue = 0;
    printf("Enter the charcter : \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
