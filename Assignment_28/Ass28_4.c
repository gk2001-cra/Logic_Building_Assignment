#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0,iRet = 0;
    char fileName[50];
    char Buffer[50] = {'\0'};

    printf("Enter File Name : \n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDONLY);
    
    if(fd == -1)
    {
        printf("File not created");
    }
    else
    {
        iRet = read(fd,Buffer,11);
        printf("Size of File is %d bytes",iRet);
        close(fd);
    
    }
    return 0;
}