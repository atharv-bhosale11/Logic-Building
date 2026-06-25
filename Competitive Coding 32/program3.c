#include<stdio.h>

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    strtogglex(arr);

    printf("Modified String is %s ",arr);

    return 0;
}
