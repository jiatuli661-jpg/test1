#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE*fp;
    char filename[256];
    long pos;
    char buf[256];
    printf("请输入文件名");
    scanf("%s",filename);
    if((fp=fopen(filename,"r"))==NULL)
    {
        perror("不能正常打开文件");
        return EXIT_FAILURE;
    }
    while(scanf("%ld",&pos)==1)
    {
        if(pos<0)
        {
            break;
        }
        if(fseek(fp,pos,SEEK_SET)!=0)
        {
            perror("fseek fail");
            continue;
        }
        if(fgets(buf,sizeof(buf),fp)!=NULL)
        {
            printf("%s",buf);
        }else{
            printf("到达文件最后");
        }
    }
    fclose(fp);
    printf("Done\n");
    return 0;
}