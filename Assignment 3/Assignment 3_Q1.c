#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int i = 0;
    int iValue = 2;

    for(i = 1; i<=iNo; i++)
    {
        printf("%d ",iValue);
        iValue = iValue + 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;   
}
