#include<stdio.h>
int main()
{
    int arr[3][5];
    printf("请输入三组数");
    int i,j,k;
    int sum=0;
    int max;
    for(i=0;i<3;i++)
    {
        int ans=0;        ans=0;
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
            ans+=arr[i][j];
            max=arr[0][0];
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        double ave=ans*1.0/5;
        printf("%f\n",ave);
        sum+=ans;
    }
    double ave2=sum*1.0/15;
    printf("%f\n",ave2);
    printf("%d\n",max);
    return 0;
}