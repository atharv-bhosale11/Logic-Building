#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;
    int iSumFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    bRet = FactDiff(iValue);

    printf("Difference is:  %d",bRet);

    return 0;
}

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;
    int iSumFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    bRet = FactDiff(iValue);

    printf("Difference is:  %d",bRet);

    return 0;
}
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;
    int iSumFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    bRet = FactDiff(iValue);

    printf("Difference is:  %d",bRet);

    return 0;
}

//Time Complexity is O(n)
