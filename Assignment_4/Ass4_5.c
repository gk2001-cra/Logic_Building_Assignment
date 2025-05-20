#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iResult = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum2 = iSum2 + iCnt; 
        }
        else if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
    }

    iResult = iSum2 - iSum1;

    return iResult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Input : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Output : %d ",iRet);

    return 0;
}