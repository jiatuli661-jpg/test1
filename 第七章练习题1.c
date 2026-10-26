#include<stdio.h>
int love(int x){
    if(x<2)return 0;
    int i;
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c;
    for(c=2;c<=n;c++){
        if(love(c)){
            printf("%d\n",c);
        }
    }
    return 0;
}