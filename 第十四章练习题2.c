#include<stdio.h>
struct month{
    char name[20];
    char a[3];
    int days;
    int num;
};
struct month month[12]={
     {"January", "Jan", 31, 1},
    {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}
};
int days(int months)
{
    int sum=0;
    for(int i=0;i<months;i++)
    {
        sum+=month[i].days;
    }
    return sum;
}
int main()
{
    int m;
    scanf("%d",&m);
    if(m<1||m>12){
        return 1;
    }
    printf("%d %d\n",m,days(m));
    return 0;
}