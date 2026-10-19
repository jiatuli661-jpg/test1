```c
#include<stdio.h>
int fib(int n){
    if(n<=2){
        return 1;
    }
    int a=1;
    int b=1;
    int c=0;
    while(n>=3){
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
int main(){
int n;
scanf("%d",&n);
int r=fib(n);
printf("%d\n",r);
return 0;
}

```

