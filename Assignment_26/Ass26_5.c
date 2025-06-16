#include<stdio.h>
#include<stdbool.h>

void StrRevX(char *str)
{
    char *iStart = NULL;
    char *iEnd = NULL;
    char Temp = '\0';

    iStart = str;
    iEnd = str;

    while(*iEnd != '\0')
    {
        iEnd++;
    }
    iEnd--;
    while(iStart < iEnd)
    {
        Temp = *iStart;
        *iStart = *iEnd;
        *iEnd = Temp;

        iStart++;
        iEnd--;    
    }
}
int main()
{
    char Arr[50]; 

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);

    printf("Character Location is : %s\n", Arr);

    return 0;
}