#include<stdio.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    char ch;
    int mode=0;
    if(argc==2)
    {
        if(argv[1][0]=='-')
        {
            switch(argv[1][1])
            {
                case'p':mode=0;break;
                case'u':mode=1;break;
                case'l':mode=2;break;
                default:
                printf("参数错误");
                return 1;
            }
        }
    }else if(argc>2)
    {
        printf("%s[-p|-u|-l]\n",argv[0]);
        return 1;
    }
    while((ch=getchar())!=EOF)
    {
        if(mode==1)
        putchar(toupper(ch));
    else if(mode==2)
    putchar(tolower(ch));
    else
    putchar(ch);
    }
    return 0;
}