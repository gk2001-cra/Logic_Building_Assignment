#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0) // Check if iCnt is a factor
        {
            if(iCnt == 1 || iCnt % 2 == 0) // Print 1 and even factors only
            {
                printf("%d  ", iCnt);
            }
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
