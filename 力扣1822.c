int arraySign(int* nums, int numsSize) {
    int cnt=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            cnt++;
        }
        if(nums[i]==0)
        {
            return 0;
        }
    }
    if(cnt%2==0)
    {
        return 1;
    }
    return -1;
}