#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    while(scanf("%d",&m)==1&&m>0){
        printf("%d%%%d=%d",m,n,m%n);
    }
    return 0;
}