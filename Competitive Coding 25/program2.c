#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, j = 0, iNo = 2;

    for(iCnt =1; iCnt <=  iRow; iCnt++)
    {
       if(iCnt % 2 == 0)
       {
        iNo = 1;
       } 
       else
       {
        iNo = 2;
       }
       for(j = 1; j <= iCol; j++)
       {
        printf("%d\t",iNo);
        iNo = iNo + 2;
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
