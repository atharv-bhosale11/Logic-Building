#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if (iStart > iEnd)
        {
            printf("Invalid Output");
            return;
        }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

// Time Complexity is O(n)
