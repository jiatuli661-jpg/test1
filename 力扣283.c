void moveZeroes(int* nums, int numsSize) {
    int slow=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[slow]=nums[i];
            slow++;
        }
    }
    for(int i=slow;i<numsSize;i++)
    {
        nums[i]=0;
    }
}