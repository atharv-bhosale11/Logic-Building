#include<stdio.h>

double SquareMeter(int iValue)
{
    float fSquareFeet = 0.0929;
    float fSquareMeter = 0.0;

    fSquareMeter = iValue * fSquareFeet;

    return fSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter Area is Square Feet:  ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Value of Square Meter : %lf",dRet);

    return 0;
}

// Time Complexity is O(1)
