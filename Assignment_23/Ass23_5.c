#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : 0%o\n",ch);
    printf("HexaDecimal : 0x%x\n",ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}