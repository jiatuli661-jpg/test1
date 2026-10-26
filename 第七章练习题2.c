#include<stdio.h>
int main()
{
    int i;
    while(1){
        printf("1.单身 2.户主 3.已婚共有 4.已婚离异 5.退出\n");
        scanf("%d\n",&i);
        if(i==5)break;
        int n;
        scanf("%d\n",&n);
        int t;
        if(i==1){
            t=17850;
        }else if(i==2){
            t=23900;
        }else if(i==3){
            t=29750;
        }else {
            if(i==4){
            t=14875;
             }
         }
         double e=t*0.15+(n-t)*0.28;
         printf("%f\n",e);
    }
    return 0;
}