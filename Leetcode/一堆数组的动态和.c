/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *ret = (int *)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        ret[i] = nums[i];
        if (i)
        {
            ret[i] = ret[i] + ret[i - 1];
        }
    }
    *returnSize = numsSize;
    return ret;
}
