#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x8104040;
    UINT iAns = 0;

    if(iAns=(iNo & iMask))
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Value: ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th,15th,21th and 28th bit is on");
    }
    else
    {
        printf("7th,15th,21th and 28th Bit is off");
    }
}
