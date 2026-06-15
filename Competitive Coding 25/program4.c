#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, j = 0, iNo = 1;
    
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if (iCnt % 2 != 0)
            {
                printf("%d\t",iNo);
            }
            else
            {
                printf("%d\t",-j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the No. of Rows and columns:\n ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
