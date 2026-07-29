#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[], int iSize)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0, iRet = 0, i = 0;

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return;
    }

    iRet = read(fd, Buffer, iSize);
    
    for(i = 0; i <= iRet; i++)
    {
        printf("%c",Buffer[i]);
    }
    close(fd);
}

int main()
{
    char FileName[20];
    int iRet = 0;
    int iValue;

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);  

    printf("Enter the Number of Characters: ");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}
