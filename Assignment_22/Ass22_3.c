#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{

    if((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character : \n");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit \n");
    }
    else 
    {
        printf("It is not a Digit \n");
    }

    return 0;
}