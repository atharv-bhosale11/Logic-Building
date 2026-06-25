#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iPos = 0;
    int iLast = -1;
    while(*str != '\0')
    {
        if(ch == *str)
        {
            iLast = iPos;
        }
        iPos++;
        str++;
    }
    return iLast;
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

    iRet = LastChar(arr,cValue);

    printf("Charachter Location is %d",iRet);
    return 0;
}
