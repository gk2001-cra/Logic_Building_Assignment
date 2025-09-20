#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fileName[50]; 
    
    printf("Enter File Name :\n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("File not opened\n");
    }
    else
    {
        printf("File opened sucessfully\n");
    }
    return 0;
}