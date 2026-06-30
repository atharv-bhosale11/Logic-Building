#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;

    if(iPos < 1 || iPos > 32)
    {
        return FALSE;
    }

    iMask = iMask << (iPos -1);

    if(iMask & iNo)
    {
        return TRUE;
    }
    return FALSE;
}


int main()
{
    UINT iValue = 0, iLocation  = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter Location: ");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }
    
    return 0;
}
