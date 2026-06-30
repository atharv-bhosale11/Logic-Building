#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x40;

    iNo = iNo ^ iMask;
    
    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number: %d",iRet);

    return 0;
}
