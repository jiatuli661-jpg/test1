// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc,char* argv[])
// {
//     int ch;
//     FILE *fp;
//     unsigned long count =0;
//     if(argc!=2)
//     {
//         printf("Usage: %s filename\n",argv[0]);
//         exit(EXIT_FAILURE);
//     }
//     if((fp=fopen(argv[1],"r"))==NULL)
//     {
//         printf("Can't open %s\n",argv[1]);
//         exit(EXIT_FAILURE);
//     }
//     while((ch=getchar())!=EOF)
//     {
//         putc(ch,stdout);
//         count++;
//     }
//     fclose(fp);
//     printf("File %s has %lu characters\n",argv[1],count);
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count=0;
    char filename[256];
    printf("请输入文件名称");
    if(fgets(filename,sizeof(filename),stdin)==NULL)
    {
        printf("提取失败");
        return EXIT_FAILURE;
    }
    filename[strcspn(filename,"\n")]='\0';
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("无法打开文件");
        return EXIT_FAILURE;
    }
    while((ch=getchar())!=EOF)
    {
        count++;
        putchar(ch);
    }
    fclose(fp);
    printf("文件%s中有%lu个字符\n",filename,count);
    return 0;
}