

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int pre = 0;
    int ret = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 0)
            pre = 0;
        else
            pre += 1;
        if (pre > ret)
            ret = pre;
    }
    return ret;
}
