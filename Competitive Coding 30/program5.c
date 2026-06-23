#include<stdio.h>

void Display(char ch)
{
    printf("CHARACTER   :      %c\n",ch);
    printf("DECIMAL     :      %d\n",ch);
    printf("OCTAl       :      %o\n",ch);
    printf("HEXADECIMAL :      %X\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Charachter: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
