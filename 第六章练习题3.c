#include<stdio.h>
int main()
{
    int n=5;
    int cnt=1;
    while(1){
        n=n-cnt;
        n*=2;
        cnt++;
        if(n>150){
            break;
        }
        printf("%d\n",n);
    }
    return 0;
}