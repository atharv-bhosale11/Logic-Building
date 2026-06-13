#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    char ch ;

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of Elements:\n ");
    scanf("%d",&iValue);

    pattern(iValue);
    return 0;
}
