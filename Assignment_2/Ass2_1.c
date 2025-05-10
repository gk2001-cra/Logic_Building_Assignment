#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    while(iCnt < iNo1)
    {
        printf("*");
        iCnt++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}