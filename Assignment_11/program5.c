#include<stdio.h>

void Display(int iNo)
{

int iCnt = 0;
//int iMul = 0;


for ( iCnt = 1; iCnt <= 10; iCnt++)
{
    printf(" %d\t" ,2 *iCnt);

}


}

int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
