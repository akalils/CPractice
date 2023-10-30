
int maximizeSum(int* nums, int numsSize, int k){
    int maxIndex = 0;
    int ans = 0;
    while (k--)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }
        ans += nums[maxIndex];
        nums[maxIndex] += 1;
    }
    return ans;
}
