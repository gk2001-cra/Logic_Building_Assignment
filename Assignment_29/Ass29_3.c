#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int CountWhite(char fileName[])
{
    int fd = 0, iRes = 0, iCount = 0, iCnt = 0;
    char Buffer[10];

    fd = open(fileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    else
    {
        while((iRes = read(fd, Buffer, sizeof(Buffer))) > 0)
        {
            for(iCnt = 0; iCnt < iRes; iCnt++)
            {
                if(Buffer[iCnt] == ' ')
                {
                   iCount++;
                }
            }

            memset(Buffer, 0, sizeof(Buffer));
        }

        close(fd);
    }

    return iCount;
}

int main()
{
    char fName[50];
    int iRet = 0;

    printf("Enter File Name : \n");
    scanf("%s", fName);

    iRet = CountWhite(fName);

    printf("Number of white spaces are : %d\n", iRet);
    
    return 0;
}
