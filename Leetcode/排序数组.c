/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    if (valueA > valueB)
        return 1;
    else
        return -1;
}
int* sortArray(int* nums, int numsSize, int* returnSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    *returnSize = numsSize;
    return nums;
}
