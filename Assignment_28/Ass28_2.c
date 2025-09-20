#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fileName[50];

    printf("Enter File Name : \n");
    scanf("%s",fileName);

    fd = creat(fileName,0777);

    if(fd == -1)
    {
        printf("File not created");
    }
    else
    {
        printf("File created sucessfully");
    }

    return 0;
}