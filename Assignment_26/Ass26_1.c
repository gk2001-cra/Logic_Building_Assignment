#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
        }
        
        str++;
    } 

    return bFlag;
}

int main()
{
    char Arr[50];
    char cValue;
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character Not Found\n");
    }
    
    return 0;
}