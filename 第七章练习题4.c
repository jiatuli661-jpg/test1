#include<stdio.h>
#define A 10.00
#define B 40
#define C 1.5
#define D 300
#define E 150
#define F 0.15
#define G 0.2
#define H 0.25
int main()
{
    printf("请输入一周工作的小时数");
    double hour;
    scanf("%lf",&hour);
    if(hour>B){
        hour*=1.5;
    }
    double sum=hour*A;
    double c=sum;
    double ans;
    if(sum<=D){
        ans=sum*F;
    }else if(sum>D&&sum<=D+E){
        ans=D*F+(sum-D)*G;
    }else{
        if(sum>D+E){
            ans=D*F+E*G+(sum-D-E)*H;
        }
    }
    printf("%f\n",c);
    printf("%f\n",ans);
    printf("%lf\n",c-ans);
    return 0;
}
