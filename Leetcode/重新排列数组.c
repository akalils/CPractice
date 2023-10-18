

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ret = (int *)malloc(sizeof(int)* n * 2);
    *returnSize = 2 * n;
    for (int i = 0; i < (2 * n); i += 2)
    {
        ret[i] = nums[i / 2];
    }
    for (int i = 1; i < (2 * n); i += 2)
    {
        ret[i] = nums[n + i / 2];
    }
    return ret;
}
