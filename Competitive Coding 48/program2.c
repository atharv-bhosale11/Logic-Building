#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void DisplayN(char Fname[])
{
    int fd = 0;

    fd = open(Fname, O_CREAT,0777);

    if(fd == -1)
    {
        return;
    }
    else
    {
        printf("File Create Succesfully!!");
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
