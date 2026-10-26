#include<stdio.h>
int main()
{
    double m=100;
    double n=100;
    int cnt=0;
    while(1){
        m+=10;
        n*=1.05;
        cnt++;
        if(n>m){
            break;
        }
    }
    printf("%d %f %f",cnt,n,m);
    return 0;
}