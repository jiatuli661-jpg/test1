#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void love(int arr[],int size,int pick)
{
    int *used=(int*)calloc(size,sizeof(int));
    if(used==NULL)
    {
        return;
    }
    int cnt=0;
    while(cnt<pick)
    {
        int idx=rand()%size+1;
        if(used[idx]==0)
        {
            printf("%d",arr[idx]);
            used[idx]=1;
            cnt++;
        }
    }
    free(used);
}
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    srand(time!=(NULL));
    love(arr,len,5);
    return 0;
}