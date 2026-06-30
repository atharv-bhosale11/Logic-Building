#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iCount = 0;

    while(iNo != 0)
    {
        iCount = iCount + (iNo & 1);
        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Updated Number: %d",iRet);

    return 0;
}
