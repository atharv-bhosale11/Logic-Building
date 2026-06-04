#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0, iOddProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iOddProduct = iOddProduct * Arr[iCnt];
        }
    }

    return iOddProduct;
}   

int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
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

    iRet = Product(p,iSize);

    printf("Prodcut is %d",iRet);
    
    free(p);

    return 0;
}
