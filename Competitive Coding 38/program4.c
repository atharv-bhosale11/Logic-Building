#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;

    iMask1 = iMask1 <<(iPos1 - 1);
    iMask2 = iMask2 <<(iPos2 - 1 );

    if(iNo & iMask1 || iNo & iMask2)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    BOOL bRet = FALSE;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter 1st Location: ");
    scanf("%d",&iLocation1);

    printf("Enter 2nd Location: ");
    scanf("%d",&iLocation2);


    bRet = ChkBit(iValue,iLocation1,iLocation2);

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
