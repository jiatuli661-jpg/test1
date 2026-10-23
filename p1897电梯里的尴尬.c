#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[1000000];
    int max=1;
    int cnt=0;
    int flag;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    int x,y;
    for(x=0;x<n;x++){
        flag=0;
        for(y=0;y<x;y++){
            if(a[x]==a[y]){
                flag=1;
                break;
            } 
        }
        if(flag==0){
            cnt++;
        }
    }
    int sum=max*10+n+cnt*5;
    printf("%d",sum);
    return 0;
}