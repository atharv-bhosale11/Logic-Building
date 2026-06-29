#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x4000;
    UINT iAns = 0;

    iAns = iNo & iMask;

    return iAns;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Value: ");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue);

    if(iRet != 0)
    {
        printf("15th bit is on");
    }
    else
    {
        printf("15th Bit is off");
    }
}
