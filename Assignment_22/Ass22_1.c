#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a character \n");
    }
    else 
    {
        printf("It is not a character");
    }

    return 0;
}