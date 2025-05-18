#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;
    }

    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Value : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}