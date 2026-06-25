#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = 0;
    while(*str != '\0')
    {
        if(ch == *str)
        {
            return iPos;
        }
        iPos++;
        str++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the String:");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character: ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("Charachter Location is %d",iRet);
    return 0;
}
