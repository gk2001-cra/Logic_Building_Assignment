#include<stdio.h>

void StrCatX(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        Src++;   
    }
    
    while(*Dest != '\0')
    {
        *Src = *Dest;

        Src++;
        Dest++;
    }
     
    *Src = '\0';  
}
int main()
{
    char Arr[30] = "Marvellous Infosystem ";
    char Brr[30] = "Logic Building";

    StrCatX(Arr, Brr);

    printf("%s", Arr);

    return 0;
}