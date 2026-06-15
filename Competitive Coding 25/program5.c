#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, j = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(j = iCnt; j < iCnt + iCol  ; j++)
        {
            printf("%d\t",j);
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
