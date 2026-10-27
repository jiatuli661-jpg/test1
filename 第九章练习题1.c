#include<stdio.h>
 #include<ctype.h>
 int life(char ch)
 {
    if(islower(ch)){
        return ch-'a'+1;
    }else if(isupper(ch)){
        return ch-'A'+1;
    }else{
        return -1;
    }
 }
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
        int pos=life(c);
        if(pos==-1){
            printf("%c不是字母\n",c);
        }else{
            printf("%c是字母,在%d处\n",c,pos);
        }
    }
    return 0;
}