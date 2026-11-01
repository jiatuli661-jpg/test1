#include<stdio.h>
#define LOVE(a,b)(1/(0.5*((1/a)+(1/b))))
int main()
{
    double m,n;
    scanf("%lf %lf",&m,&n);
    double c=LOVE(m,n);
    printf("%f",c);
    return 0;
}