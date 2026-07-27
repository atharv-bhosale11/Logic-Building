#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0, iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        Sum(iNo / 10);
    }
    return iSum;
}

int main()
{
    int iValue= 0, iRet = 0;;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summartion is: %d",iRet);

    return 0;
}
