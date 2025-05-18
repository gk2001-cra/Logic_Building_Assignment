#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("-%d ",iCnt);
    }
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf(" %d ",iCnt);
    }


}
int main()
{
    int iValue = 0;

    printf("Enter value : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}