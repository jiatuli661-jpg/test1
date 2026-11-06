bool isMonotonic(int* nums, int numsSize) {
    bool x=true;
    bool y=true;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]>nums[i-1])
        {
            x=false;
        }
        if(nums[i]<nums[i-1])
        {
            y=false;
        }
    }
    return x||y;
}