#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0,iRet = 0;
    char fileName[50];
    char Buffer[] = {'\0'};

    printf("Enter File Name : \n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDONLY);
    
    if(fd == -1)
    {
        printf("File not created");
    }
    else
    {
        printf("Data from the file is : \n");
        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s\n",Buffer);
            memset(Buffer,'\0', 10);
        }

        close(fd);
    }
    
    return 0;
}