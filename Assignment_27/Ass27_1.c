#include<stdio.h>

void StrCpyX(char *Src,char *Dest)
{
    while(*Src != '\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }
}
int main()
{
    char Arr[30] = "Marvellous Infosystem OS ";
    char Brr[30] = {'\0'};

    StrCpyX(Arr, Brr);

    printf("%s", Brr);

    return 0;
}