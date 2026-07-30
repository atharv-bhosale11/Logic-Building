#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void AppendX(char Fname[])
{
    int fd = 0;
    int iRet = 0;
    int iSize = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        return;
    }
    
    write(fd, "Hello World",strlen(" Hello World"));

    close(fd);
}

int main()
{
    char FileName[20];
    int iRet = 0;

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);

    AppendX(FileName);

    printf("Successfully Done!!!");

    return 0;
}
