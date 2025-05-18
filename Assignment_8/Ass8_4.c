#include<stdio.h>

int FhtoCs(float fTemp)
{
    double fRes = 0.0;

    fRes = ((fTemp -32) * 5/9);

    return fRes;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Tempreature in Farahnite : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The tempreature in degree celcius is : %lf",dRet);

    return 0;
}