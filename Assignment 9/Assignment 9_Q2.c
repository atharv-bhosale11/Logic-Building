#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iNo % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Odd Digits are: %d",iRet);
    return 0;
}

// Time Complexity is O(log n)
