#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        Reverse(iNo / 10);
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse Number is: %d",iRet);

    return 0;
}
