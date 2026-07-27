#include<stdio.h>

int Small(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        Small(str + 1);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the String:\n");
    scanf("%[^\n]",arr);

    iRet = Small(arr);

    printf("Number of Small Characters: %d",iRet);

    return 0;
}
