#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
           break; 
        }
        iIndex++;
    }

    if(str[iIndex] != ch)
    {
        return -1; 
    }
    return iIndex;
}
int main()
{
    char Arr[50]; 
    char cValue = '\0';
    int iRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter Character : \n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Character Location is : %d\n", iRet);

    return 0;
}