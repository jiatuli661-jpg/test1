#include<stdio.h>
int Fibonacci(int x)
{
    int i=1;
    int j=1;
    int k;
    int cnt=3;
    if(x==1||x==2)
    {
        return 1;
    }
    while(cnt<=x){
        k=i+j;
        i=j;
        j=k;
        cnt++;
    }
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Fibonacci(n));
    return 0;
}