int mySqrt(int x) {
    if(x==0)return 0;
    int i;
    for(i=1;i<x;i++){
        if(i==x/i){
            return i;
        }else{
            if(i<x/i&&(i+1)>x/(i+1)){
                return i;
            }
        }
    }
    return i;
}