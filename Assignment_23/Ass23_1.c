#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c \t %x \n %o \n",iCnt, iCnt, iCnt);
    }

}

int main()
{
    DisplayASCII();

    return 0;
    
}