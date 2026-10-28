// #include<stdio.h>
// int main()
// {
//     int arr[3][5];
//     printf("请输入三组数");
//     int i,j,k;
//     int sum=0;
//     int max;
//     for(i=0;i<3;i++)
//     {
//         int ans=0;        ans=0;
//         for(j=0;j<5;j++)
//         {
//             scanf("%d",&arr[i][j]);
//             ans+=arr[i][j];
//             max=arr[0][0];
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//         }
//         double ave=ans*1.0/5;
//         printf("%f\n",ave);
//         sum+=ans;
//     }
//     double ave2=sum*1.0/15;
//     printf("%f\n",ave2);
//     printf("%d\n",max);
//     return 0;
// }
#include<stdio.h>
void calc(int rows,int cols,int arr[rows][cols])
{
    int sum1=0;
    int max=arr[0][0];
    for(int i=0;i<rows;i++)
    {
        int sum2=0;
        for(int j=0;j<cols;j++)
        {
            sum1+=arr[i][j];
            sum2+=arr[i][j];
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        double ave=sum2*1.0/cols;
        printf("%d %f\n",i+1,ave);
    }
    double ave1=sum1*1.0/(rows*cols);
    printf("%f\n",ave1);
    printf("%d\n",max);
}
int main(void)
{
    int row=3;
    int col=5;
    int arr[3][5];
    printf("请输入三组整数\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    calc(row,col,arr);
    return 0;
}