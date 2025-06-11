#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = 'z'; iCnt >= 'a'; iCnt--,ch--)
        {
            printf("%c ",ch);
            if(ch == 'a')
            {
                break;
            }
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = 'A'; iCnt <= 'Z'; iCnt++,ch++)
        {
            printf("%c ",ch);
            if(ch == 'Z')
            {
                break;
            }
        }
    }   
}
int main()
{
    char cValue = '\0';

    printf("Enter Character Value :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}