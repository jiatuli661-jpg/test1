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
    off_t n=lseek(fd,5,SEEK_SET);
    if(n==-1)
    {
        perror("lseek");
        close(fd);
        return 1;
    }
    printf("偏移%ld",(long)n);
    close(fd);
    return 0;
}