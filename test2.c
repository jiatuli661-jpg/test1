#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(void)
{
    int fd=open("test.txt",O_RDONLY);
    if(fd==-1)
    {
        perror("open");
        return 1;
    }
    printf("文件描述符%d",fd);
    close(fd);
    return 0;
}