#include<stdio.h>
#define I 3.785
#define J 1.609
int main()
{
    float m,n;
    printf("请输入旅行的里程");
    scanf("%f",&m);
    printf("请输入消耗的汽油量");
    scanf("%f",&n);
    float x=m/n;
    printf("%.1f",x);
    float y=(n*100*I)/(m*J);
    printf("%.1f",y);
    return 0;
}