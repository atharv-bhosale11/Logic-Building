#include<stdio.h>

void Reverse(char *str)
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

    printf("Enter String:  ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    printf("%s",arr);
    return 0;
}
