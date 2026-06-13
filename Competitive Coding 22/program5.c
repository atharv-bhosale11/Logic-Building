#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt  = 0, iEven = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iEven);
        iEven = iEven + 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of Elements:\n ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
