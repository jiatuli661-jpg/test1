#include<stdio.h>
int love(int x)
{
    int cnt=0;
    while(x!=0)
    {
        x=x&(x-1);
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",love(n));
    return 0;
}