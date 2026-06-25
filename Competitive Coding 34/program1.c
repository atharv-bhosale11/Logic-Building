#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[30];
     
    printf("Enter the String:");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}
