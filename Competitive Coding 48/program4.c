#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int Size(char Fname[])
{
    int fd = 0;
    int iRet = 0;
    int iSize = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return ERR_OPEN;
    }
    else
    {
        while((iRet = read(fd, Buffer,sizeof(Buffer))) != 0)
        {
            iSize = iSize + iRet;
        }
    }
    close(fd);
    return iSize;
}

int main()   
{
    char FileName[20];
    int iRet = 0;

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);

    iRet = Size(FileName);

    printf("Size of File is: %d bytes",iRet);

    return 0;
}
