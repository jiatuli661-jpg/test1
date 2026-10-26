#include<stdio.h>
double temperatures(double x){
    const double y=5.0/9.0*(x-32.0);
    const double z=y+273.16;
    printf("%f,%f,%f",x,y,z);
}
int main()
{
    double f;
    while(scanf("%lf",&f)==1){
        temperatures(f);
    }
    return 0;
}