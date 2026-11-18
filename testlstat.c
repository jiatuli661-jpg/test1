#include<stdio.h>
#include<sys/stat.h>
int main(void)
{
    struct stat file_stat;
    struct stat file_lstat;
    if(stat("b.txt",&file_stat)==-1)
    {
        perror("stat");
        return 1;
    }
    if(lstat("b.txt",&file_lstat)==-1)
    {
        perror("lstat");
        return 1;
    }
    printf("stat文件类型\n");
    if(S_ISREG(file_stat.st_mode))
    printf("普通文件\n");

    if(S_ISDIR(file_stat.st_mode))
    printf("目录\n");

    if(S_ISLNK(file_stat.st_mode))
    printf("符号链接\n");

    printf("lstat文件类型\n");
    if(S_ISREG(file_lstat.st_mode))
    printf("普通文件\n");

    if(S_ISDIR(file_lstat.st_mode))
    printf("目录\n");

    if(S_ISLNK(file_lstat.st_mode))
    printf("符号链接\n");
    return 0;
}