#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if (iNo >= 51)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    Number(iValue);

    return 0;
}

// Time Complexity is O(1)
