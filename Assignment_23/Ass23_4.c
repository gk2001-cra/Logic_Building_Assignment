#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    bool bFlag = false;

    if(((ch >= 'A') && (ch <= 'Z')) || (ch >= 'a') && (ch <= 'z'))
    {
        return bFlag = true;
    }
    else
    {
        return bFlag = false;
    }
      
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("It is not special symbol ");
    }
    else
    {
        printf("It is a special symbol ");
    }
    return 0;
}