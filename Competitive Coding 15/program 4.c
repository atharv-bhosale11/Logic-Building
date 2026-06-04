#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}   

int main()
{
    int iSize = 0,iCnt = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter the First Range: ");
    scanf("%d",&iValue1);

    printf("Enter the Last Range: ");
    scanf("%d",&iValue2);

    Range(p,iSize,iValue1,iValue2);
    
    free(p);

    return 0;
}
