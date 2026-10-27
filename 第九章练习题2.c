#include<stdio.h>

    void swap(double *a,double *b)
    {
        double temp=*a;
        *a=*b;
        *b=temp;
    }
    void sort3(double *p1,double *p2,double *p3)
    {
        if(*p1>*p2)
        swap(p1,p2);
        if(*p1>*p3)
        swap(p1,p3);
        if(*p2>*p3)
        swap(p2,p3);
    }
    int main(void)
    {
        double x,y,z;
        scanf("%lf %lf %lf",&x,&y,&z);
        sort3(&x,&y,&z);
        printf("%lf %lf %lf",x,y,z);
        return 0;
    }
