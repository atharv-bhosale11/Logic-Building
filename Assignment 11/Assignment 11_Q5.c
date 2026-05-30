#include<stdio.h>

void RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart > iEnd)
        {
            printf("Invalid Range");
            return;
        }

    for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
    {   
        printf("%d\t",iCnt);    
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);

    RangeSumEven(iValue1,iValue2);

   return 0;
}

// Time Complexity is O(n)
