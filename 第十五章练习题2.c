#include<stdio.h>
int love(int a,int b)
{
    if(a&(1<<b))
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",love(a,b));
    return 0;
}