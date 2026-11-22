bool checkString(char* s) {
    int m=-1;
    int n=-1;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='b')
        {
            m=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]=='a')
        {
            n=i;
            break;
        }
    }
    if(m>=n||m==-1||n==-1)
    {
        return true;
    }
    return false;
}