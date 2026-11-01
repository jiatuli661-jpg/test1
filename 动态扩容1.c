#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int len=5;
    char *p=malloc(sizeof(char)*len);
    memcpy(p,"xiyou",5);
    p=realloc(p,len+strlen("linux")+1);
    strcpy(p+5,"linux");
    printf("%s",p);
    return 0;
}