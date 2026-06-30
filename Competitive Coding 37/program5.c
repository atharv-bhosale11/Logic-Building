#include<stdio.h>

typedef unsigned int UINT;

UINT Toggle(UINT iNo)
{
    UINT iMask = 0x99999999;
    
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Toggle(iValue);

    printf("Updated Number : %d",iRet);

    return 0;
}
