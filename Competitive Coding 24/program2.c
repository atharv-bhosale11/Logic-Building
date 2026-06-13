#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int iCnt = 0, jCnt = 0;
    char ch = 0, ch1 = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1, ch = 'A',ch1 = 'a'; jCnt <= iCol; jCnt++, ch++,ch1++)
        {
            if (iCnt % 2 == 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch);
            }
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

