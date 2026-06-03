#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iSummationOdd = 0, iSummationEven = 0, iDifference = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSummationEven = iSummationEven + Arr[iCnt];
        }
        else
        {
            iSummationOdd = iSummationOdd + Arr[iCnt];
        }
    }
    iDifference = iSummationEven - iSummationOdd;

    return iDifference;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the Size of Array: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the Memory");
        return -1;
    }

    printf("Enter the Elements : ");

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is: %d ",iRet);
    
    free(p);

    return 0;
}
