#include<stdio.h>
int main()
{
    double n=100;
    int cnt=0;
    while(1){
        n=n*1.08;
        n-=10;
        cnt++;
        if(n<=0){
            break;
        }
    }
    printf("%d\n",cnt);
    return 0;
}