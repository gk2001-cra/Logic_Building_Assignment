#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void DisplayN(char fileName[],int iSize)
{
    int fd = 0, iRes = 0, iCount = 0, iCnt = 0, iCount = 0;
    char Buffer[10];

    fd = open(fileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }

    else
    {
        while((iRes = read(fd, Buffer, sizeof(Buffer))) > 0)
        {
            for(iCnt = 0; iCnt <= iSize; iCnt++)
            {
                iCount++;
            }
            
            memset(Buffer, 0, sizeof(Buffer));
        }
    
        printf("%s\n", Buffer);
        close(fd);
    }
}

int main()
{
    char fName[50];
    int iValue = '\0';

    printf("Enter File Name : \n");
    scanf("%s", fName);

    printf("Enter the character : \n");
    scanf(" %d",&iValue);

    DisplayN(fName,iValue);
    
    return 0;
}
