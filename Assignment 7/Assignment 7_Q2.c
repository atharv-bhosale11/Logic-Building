#include<stdio.h>

float DollarToINR(int iNo)
{
    float fUSD = 95.81f;
    float fRuppee = 0.0f;

    fRuppee = fUSD * iNo;

    return fRuppee;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number of USD: ");
    scanf("%d",&iValue);
    
    fRet = DollarToINR(iValue);

    printf("Value of INR is %f",fRet);

    return 0;
}

// Time Complexity is O(1)
