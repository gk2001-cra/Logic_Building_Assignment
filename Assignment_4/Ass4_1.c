#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

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

    printf("Input : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Output : %d",iRet);

    return 0;
}