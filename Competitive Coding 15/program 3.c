#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iLength, int iNo)
{
    int iCnt = 0,iCountNo = 0;

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
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

    iRet = LastOcc(p,iSize,iSearch);

    if (iRet == -1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Last Occurance of Number is %d",iRet);
    }
    
    free(p);

    return 0;
}
