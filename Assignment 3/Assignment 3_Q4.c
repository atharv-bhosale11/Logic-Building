#include<stdio.h>

void DisplayConvert(char CValue)
{
    if (CValue >= 'a' && CValue <= 'z')
    {
        CValue = CValue - 32;
        printf("%c",CValue);
    }
    else if (CValue >= 'A' && CValue <= 'Z')
    {
        CValue = CValue + 32;
        printf("%c",CValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;   
}
