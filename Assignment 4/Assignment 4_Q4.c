#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    bRet = NonFact(iValue);

    printf("Summation of all Non-factor is %d",bRet);

    return 0;
}


//Time Complexity is O(n)
