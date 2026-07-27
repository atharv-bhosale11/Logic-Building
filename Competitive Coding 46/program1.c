#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }   
        WhiteSpace(str + 1);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the String:\n");
    scanf("%[^\n]",arr);

    iRet = WhiteSpace(arr);

    printf("Number of White Spaces: %d",iRet);

    return 0;
}
