

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *ans = malloc(sizeof(int) * 2 * numsSize);
    *returnSize = numsSize * 2;
    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i];
    }
    for (int i = numsSize; i < numsSize * 2; i++)
    {
        ans[i] = nums[i - numsSize];
    }
    return ans;
}
