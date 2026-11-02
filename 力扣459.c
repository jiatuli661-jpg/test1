bool repeatedSubstringPattern(char* s) {
    int len=strlen(s);
    for(int i=1;i<=len/2;i++){
        if(len%i!=0){
            continue;
        }
        int j=0;
        for(j=0;j<len;j++)
        {
            if(s[j]!=s[j%i]){
                break;
            }
        }
        if(j==len)
        {
            return true;
        }
    }
    return false;
}