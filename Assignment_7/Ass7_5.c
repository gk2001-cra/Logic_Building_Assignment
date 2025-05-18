#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMult1 = 1;
    int iMult2 = 1;
    int iDifference = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if(iCnt %2 == 0)
        {
            iMult1 = iMult1 * iCnt;
        }

        if(iCnt %2 != 0)
        {
            iMult2 = iMult2 * iCnt;
        }
    }
    
    iDifference = iMult1 - iMult2;

    return iDifference;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Odd Factorial of Number is : %d",iRet);

    return 0;
}