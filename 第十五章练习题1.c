// #include<stdio.h>
// int love(char*m)
// {
//     int sum=0;
//     while(*m!='\0')
//     {
//         sum=sum*2+(*m-'0');
//         m++;
//     }
//     return sum;
// }
// int main()
// {
//     char *pbin;
//     scanf("%s",pbin);
//     int sum=love(pbin);
//     printf("%d",sum);
//     return 0;
// }
#include<stdio.h>
int love(char *m)
{
    int sum=0;
    while(*m!='\0')
    {
        sum=sum<<1;
        if(*m=='1')
        {
            sum=sum|1;
        }
        m++;
    }
    return sum;
}
int main()
{
    char *pbin;
    scanf("%s",pbin);
    int sum=love(pbin);
    printf("%d",sum);
    return 0;
}