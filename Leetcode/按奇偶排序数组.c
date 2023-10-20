

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int qua(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return -1;
}
int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    if (qua(valueA) > qua(valueB))
        return 1;
    else
        return -1;
}
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int *ret = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++)
        ret[i] = nums[i];
    qsort(ret, numsSize, sizeof(int), cmp);
    return ret;
}
