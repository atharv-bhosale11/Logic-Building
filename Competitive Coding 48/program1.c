#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0;

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return;
    }
    else
    {
        printf("File open Succesfully!!");
    }
    close(fd);
}

int main()
{
    char FileName[20];
    int iValue;

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);

    DisplayN(FileName);

    return 0;
}
