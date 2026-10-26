#include<stdio.h>
int main()
{
    char ch;
    double x=0;
    double y=0;
    double z=0;
    double weight;
    double x1;
    double y1;
    double z1;
    printf("a洋  b甜菜   c胡萝卜   q结束");
    while(1){
        printf("选择商品");
        scanf("%c",&ch);
        if(ch=='q')break;
        printf("输入磅数");
        scanf("%lf",&weight);
        switch (ch)
        {
            case'a':
            x+=weight;
            break;
            case'b':
            y+=weight;
            break;
            case'c':
            z+=weight;
            default:
            printf("错了");
            continue;
      }
    }
    double sum=0;
    sum=x+y+z;
    double ans=0;
    ans=x*2.05+y*1.15+z*1.09;
    if(ans>=100){
        ans=ans*0.95;
    }
    if(sum<=5){
        ans=ans+6.5;
    }else if(sum>5&&sum<=20){
        ans+=14;
    }else{
        if(sum>20){
            double l=(sum-20)*0.5;
            ans=ans+14+l;
        }
    }
    printf("2.05   1.15   1.09\n");
    printf("%f %f %f\n",x,y,z);
    printf("%f\n",ans);


}