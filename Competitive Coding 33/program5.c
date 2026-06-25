#include<stdio.h>

void StrRevX(char *str)
{
    char *START = NULL;
    char *END = NULL;
    char temp = '\0';

    START = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;
    END = str;

    while(START < END)
    {
        temp = *START;
        *START = *END;
        *END = temp;
        START++;
        END--;
    }
}

int main()
{
    char arr[20];
    char cValue;

    printf("Enter the String:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified String is %s",arr);

    return 0;
}
