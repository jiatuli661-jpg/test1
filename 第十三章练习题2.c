#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    if(argc!=3){
        return EXIT_FAILURE;
    }
    FILE*fp=fopen(argv[2],"r");
    if(fp==NULL){
        return EXIT_FAILURE;
    }
    char buf[256];
    while(fgets(buf,sizeof(buf),fp)!=NULL){
        if(strstr(buf,argv[1])!=NULL){
            printf("%s",buf);
        }
    }
    fclose(fp);
    return 0;
}