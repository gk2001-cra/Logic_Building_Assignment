#include<stdio.h>

void StrNCpyX(char *Src,char *Dest, int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }
}
int main()
{
    char Arr[30] = "Marvellous Infosystem ";
    char Brr[30] = {'\0'};

    StrNCpyX(Arr, Brr, 10);

    printf("%s", Brr);

    return 0;
}