#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMet = 0;

    iMet = iNo * 1000;

    return iMet;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Converted Value is: %d",iRet);

    return 0;
}

// Time Complexity is O(n)
