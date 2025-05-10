#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CVAlue)
{
    if(CVAlue == 'a' || CVAlue == 'e' || CVAlue == 'i' || CVAlue == 'o' || CVAlue == 'u' ||
       CVAlue == 'A' || CVAlue == 'E' || CVAlue == 'I' || CVAlue == 'O' || CVAlue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue); 

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}
