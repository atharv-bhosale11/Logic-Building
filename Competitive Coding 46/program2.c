#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    static int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        Max(iNo / 10);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Largest number is: %d",iRet);
    return 0;
}
