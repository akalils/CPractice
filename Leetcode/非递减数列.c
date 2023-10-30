

bool checkPossibility(int* nums, int numsSize){
    int pos = -1;
    int ans = 0;
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            ans++;
            pos = i;
        }
    }
    if (ans >= 2)
        return false;
    if (ans == 0)
        return true;
    if (pos == 0 || nums[pos - 1] <= nums[pos + 1])
        return true;
    if (pos == numsSize - 2 || nums[pos] <= nums[pos + 2])
        return true;
    return false;
}
