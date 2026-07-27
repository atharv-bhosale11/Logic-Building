#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)
    {
        iFact = iFact * iNo;
        Fact(iNo -1);
    }
    return iFact;
}

int main()
{
    int ivalue = 0, iRet = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&ivalue);

    iRet = Fact(ivalue);

    printf("Factorial is: %d",iRet);

    return 0;
}
