int calPoints(char** operations, int operationsSize) {
    int arr[1001];
    int top=0;
    for(int i=0;i<operationsSize;i++)
    {
        char op=operations[i][0];
        if(op=='C')
        {
            top--;
        }else if(op=='D')
        {
            arr[top]=arr[top-1]*2;
            top++;
        }else if(op=='+')
        {
            arr[top]=arr[top-1]+arr[top-2];
            top++;
        }else{
            int num=atoi(operations[i]);
            arr[top]=num;
            top++;
        }
    }
    int sum=0;
    for(int i=0;i<top;i++)
    {
        sum+=arr[i];
    }
    return sum;
}