#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(void)
{
    int fd=open("test.txt",O_RDONLY);
    if(fd==-1)
    {
        perror("open");
        return 1;
    }
    if(close(fd)==-1)
    {
        perror("close");
        return 1;
    }
    return 0;
}