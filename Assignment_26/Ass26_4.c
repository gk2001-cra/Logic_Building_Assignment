#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iResult = 0;

    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
           iResult = iIndex;
        }
        iIndex++;
    }
    return iResult;
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

    iRet = LastChar(Arr, cValue);

    printf("Character Location is : %d\n", iRet);

    return 0;
}