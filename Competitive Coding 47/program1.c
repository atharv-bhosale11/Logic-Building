#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int CountCapital(char Fname[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, iCount = 0, i = 0;

    fd = open(Fname, O_RDONLY);
    
    if(fd == -1)
    {
        return ERR_OPEN;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
        memset(Buffer, '\0', sizeof(Buffer));
    }
    close(fd);
    return iCount;
}

int main()
{
    char FileName[20];
    int iRet = 0;

    printf("Enter File Name: ");
    scanf("%[^'\n']s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital Character: %d",iRet);

    return 0;
}
