#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0;

    fCelsius = (fTemp - 32) * 5 / 9;

    return fCelsius;

}

int main()
{
    float fValue = 0;
    double dRet = 0.0;
    
    printf("Enter Temperature in Fahreneheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius Value is: %lf",dRet);

    return 0;
}

// Time Complxity is O(1)
