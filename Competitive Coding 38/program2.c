#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iResult = 0, iPos = 1;

    iResult = iNo1 & iNo2;

    while (iResult != 0)
    {
        if(iResult & 1)
        {
            printf("%d\t",iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0,iValue2 = 0;

    printf("Enter First Number: ");
    scanf("%d",&iValue1);

    printf("Enter Second Number: ");
    scanf("%d",&iValue2);

    printf("Common Position are: ");

    CommonBits(iValue1,iValue2);

    return 0;
}
