#include<stdio.h>

void DisplayConvert(char CValue)
{

    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c \n",CValue -32);
    }
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c \n",CValue +32);
    }
}

int main()
{
    char cValue ='\0';

    printf("Enter Character : \n");
    scanf("%c",& cValue);

    DisplayConvert(cValue);

    return 0;
}