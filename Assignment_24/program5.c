#include <stdio.h>

void ReverseString(char *str)
{
    int start = 0;
    int end = 0;
    char temp = '\0';

    
    while (str[end] != '\0')
    {
        end++;
    }
    end--; 


    while (start < end)
    {
        
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string:\n");
    scanf("%[^\n]", Arr);

    ReverseString(Arr);

    printf("Reversed string is: %s\n", Arr);

    return 0;
}
