#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[])
{
    int fd = 0;
    int iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return;
    }
    else
    {
        while((iRet = read(fd, Buffer,sizeof(Buffer))) != 0)
        {
            write(1,Buffer,iRet);
        }
    }
    close(fd);
}

int main()
{
    char FileName[20];

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);

    DisplayN(FileName);

    return 0;
}
