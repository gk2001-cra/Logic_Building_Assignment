#include<stdio.h>
double SquareMeter(int iNo)
{
    double fRes = 0.0;

    fRes = (iNo * 0.0929);

    return fRes;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Square Foot : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Square foot in Meter is : %lf",dRet);

    return 0;
}