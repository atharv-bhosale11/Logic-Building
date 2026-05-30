#include<stdio.h>

int CountFour(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit >= 0 && iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Numbera less than 6 occurs %d times",iRet);

   return 0;
}

// Time Complexity is O(d)
