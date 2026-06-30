#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x8;

    iNo = iNo | iMask;
   
    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated Number: %d",iRet);

    return 0;
}
