#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{

    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is a small case character \n");
    }
    else 
    {
        printf("It is not a small case character \n");
    }

    return 0;
}