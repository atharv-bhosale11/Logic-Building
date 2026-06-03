#include<stdio.h>
#include<stdlib.h>

int Frequecny(int Arr[],int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0, iDifference = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    iDifference = iCountEven - iCountOdd;

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

    iRet = Frequecny(p,iSize);

    printf("Frequency of Even Numbers are %d",iRet);

    free(p);

    return 0;
}
