#include<stdio.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 2;

    while(iCnt <= iNo*2)
    {
        printf("%d ",iCnt);
        iCnt += 2;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",& iValue);

    printEven(iValue);

    return 0;
}