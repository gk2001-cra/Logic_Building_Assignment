#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50)&&(iNo < 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Larger");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Value : \n");
    scanf("%d",&iValue);

    Number(iValue); 

    return 0;
}