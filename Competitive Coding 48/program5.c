#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void AppendX(char Fname[],char str[])
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        return;
    }
    
    write(fd, str,strlen(str));

    close(fd);
}

int main()
{
    char FileName[20];
    int iRet = 0;
    char str[20];

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);

    printf("Enter the Character: ");
    scanf(" %[^'\n']s",str);

    AppendX(FileName,str);

    printf("Successfully Done!!!");

    return 0;
}
