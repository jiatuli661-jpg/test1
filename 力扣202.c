int love(int n)
{
    int sum=0;
    while(n>0)
    {
        int c=n%10;
        sum+=c*c;
        n=n/10;
    }
    return sum;
}
bool isHappy(int n) {
    int slow=n;
    int fast=love(n);
    while(fast!=1&&fast!=slow)
    {
        slow=love(slow);
        fast=love(love(fast));
    }
    return fast==1;
}