#include<stdio.h>

int CountSmall(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;
    int iResult = 0;

  
        while(*str != '\0')
        {
            if((*str >= 'A') && (*str <= 'Z'))
            {
                iCountCap++;  
            }  
            else if((*str >= 'a') && (*str <= 'z'))
            {
                iCountSmall++;  
            }
            str++;   
        }

        iResult = iCountSmall - iCountCap;

    return iResult;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of small letters are : %d",iRet);

    return 0;
}