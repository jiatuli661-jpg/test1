#include<stdio.h>
#include<float.h>
int main()
{
    double a=1.0/3.0;
    float b=1.0f/3.0f;
    printf("====double (1.0/3.0)====\n");
    printf("六位小数%.6f\n",a);
    printf("16位%.16f\n",a);
    printf("%d位有效数字:%.*g\n",DBL_DIG,DBL_DIG,a);
    printf("\n====float(1.0f/3.0f)====\n");
    printf("6位,%.6f\n",b);
    printf("16位,%.16f\n",b);
    printf("%d位有效数字:%.*g\n",FLT_DIG,FLT_DIG,b);
    return 0;
}