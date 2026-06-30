#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,UINT iStart, UINT iEnd)
{
    int iCnt = 0;
    UINT iMask = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (1 << (iCnt - 1));
    }
    iNo = iNo ^ iMask;
    return iNo;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0, iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter Start Location: ");
    scanf("%d",&iLocation1);

    printf("Enter End Location: ");
    scanf("%d",&iLocation2);

    iRet = ToggleBitRange(iValue,iLocation1,iLocation2);

    printf("Updated Number: %d",iRet);

    return 0;
}
