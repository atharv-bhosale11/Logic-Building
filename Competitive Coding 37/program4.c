#include<stdio.h>

typedef unsigned int UINT;

UINT Toggle(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    
    iMask = iMask << (iPos - 1);

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter Location: ");
    scanf("%d",&iLocation);

    iRet = Toggle(iValue,iLocation);

    printf("Updated Number : %d",iRet);

    return 0;
}
