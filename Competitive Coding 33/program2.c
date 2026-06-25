#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(ch == *str || (*str == ch - 32) || (*str == ch+32))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountChar(arr,cValue);

    printf("Letter found %d times",iRet);
    return 0;
}
