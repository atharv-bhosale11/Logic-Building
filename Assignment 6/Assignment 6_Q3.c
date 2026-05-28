#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iMul = iMul * iCnt;
    }
    
    return iMul;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    bRet = Factorial(iValue);
    printf("Factorial of %d is %d",iValue,bRet);

    return 0;
}

// Time Complexity is O(n)
