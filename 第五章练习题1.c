#include<stdio.h>
double love(double x){
    double n=x*x*x;
    return n;
}
int main()
{
    double  i;
    printf("请输入double类型的函数");
    scanf("%lf",&i);
    printf("%f",love(i));
    return 0;
}