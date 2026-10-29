#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 100
int main(void)
{
    int arr[N];
    int i,j,temp;
    srand((unsigned int)time(NULL));
    for(i=0;i<N;i++)
    {
        arr[i]=rand()%10+1;
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("随机数为\n");
    for(i=0;i<N;i++)
    {
        printf("%d", arr[i] );
        if((i+1)%10==0)
        printf("\n");
    }
    return 0;
}