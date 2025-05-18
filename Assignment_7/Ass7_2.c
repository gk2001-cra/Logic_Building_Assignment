#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;

    iDollar = iNo * 70;

    return iDollar;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR iS : %d ",iRet);

    return 0;
}