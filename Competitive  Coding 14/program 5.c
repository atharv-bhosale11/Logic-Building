#include<stdio.h>
#include<stdlib.h>


int Frequecny(int Arr[],int iLength, int iNo)
{
    int iCnt = 0,iCountNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCountNo++;
        }
    }
    return iCountNo;
}   

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iSearch = 0;
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

    printf("Enter Searching Elements: ");
    scanf("%d",&iSearch);

    iRet = Frequecny(p,iSize,iSearch);

    printf("Frequency of %d is %d",iSearch,iRet);
    free(p);

    return 0;
}
