#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int arr[1000];
    srand(time!=NULL);
    int i;
    int sum=0;
    for(i=0;i<1000;i++)
    {
        arr[i]=rand()%10+1;
    }
    int cnt[11]={0};
    int j;
    for(j=0;j<1000;j++)
    {
        cnt[arr[j]]++;
    }
    for(int i=1;i<=10;i++)
    {
        printf("%d ",cnt[i]);
        sum+=cnt[i];
    }
    printf("\n");
    printf("%d\n",sum);
    return 0;
}