#include<stdio.h>

void StrCpyCap(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src;

            Dest++; 
        } 

        Src++;      
    }
}
int main()
{
    char Arr[30] = "Marvellous Infosystem OS";
    char Brr[30] = {'\0'};

    StrCpyCap(Arr, Brr);

    printf("%s", Brr);

    return 0;
}