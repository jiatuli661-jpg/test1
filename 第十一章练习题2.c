#include<stdio.h>
#include<ctype.h>
int love(const char *s)
{
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(!isdigit(s[i]))
        {
            return 0;
        }
        sum=sum*10+(s[i]-'0');
    }
    return sum;
}
int main()
{
    char s[200];
    scanf("%s",s);
    printf("%d\n",love(s));
    return 0;
}