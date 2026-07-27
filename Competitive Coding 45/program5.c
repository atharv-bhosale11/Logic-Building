#include<stdio.h>

int Mult(int iNo)
{
    static int iMul = 1;
    
    if(iNo > 0)
    {
        iMul = iMul * (iNo % 10);
        Mult(iNo / 10);
    }
    return iMul;
}

int main()
{
    int ivalue = 0, iRet = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&ivalue);

    iRet = Mult(ivalue);

    printf("Product is: %d",iRet);

    return 0;
}
