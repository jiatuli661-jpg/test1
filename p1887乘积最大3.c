#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a=n/m;
    int b=n%m;
    int i,j;
    for(i=0;i<m-b;i++)
    {
        printf("%d ",a);
    }
    for(j=0;j<b;j++){
        printf("%d ",a+1);
    }
    return 0;
}