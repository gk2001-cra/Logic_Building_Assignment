#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char ch)
{

    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCharacter(cValue);

    if(bRet == true)
    {
        printf("It is a capital character \n");
    }
    else 
    {
        printf("It is not a capital character");
    }

    return 0;
}