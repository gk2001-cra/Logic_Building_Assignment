#include<stdio.h>

double CircleArea(float fWidth, float fHeight)
{
    double Area = 0.0;

    Area = fWidth * fHeight;

    return Area;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = CircleArea(fValue1, fValue2);

    printf("The Area Of Rectangle is : %f",dRet);

    return 0;
}