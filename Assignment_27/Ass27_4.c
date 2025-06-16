#include<stdio.h>

void StrCpySmall(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src <= 'z'))
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

    StrCpySmall(Arr, Brr);

    printf("%s", Brr);

    return 0;
}