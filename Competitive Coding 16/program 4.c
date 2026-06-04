#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0, iDigit = 0, iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 3)
            {
                printf("%d\t",Arr[iCnt]);
                break;
            }
            iNo = iNo / 10;
        }    
    }
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

    Digits(p,iSize);
    
    
    free(p);

    return 0;
}
