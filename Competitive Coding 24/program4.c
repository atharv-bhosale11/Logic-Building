#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int iCnt = 0, jCnt = 0;

    for(iCnt = iRow; iCnt >= 1; iCnt--)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Column:\n ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}
