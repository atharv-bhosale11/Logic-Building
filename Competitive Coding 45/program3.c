#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        Strlen(str + 1);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the String:\n");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("Number of Characters: %d",iRet);

    return 0;
}
