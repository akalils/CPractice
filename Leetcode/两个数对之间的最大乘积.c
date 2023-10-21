int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    return valueA < valueB ? 1 : -1;
}
int maxProductDifference(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    return (nums[0] * nums[1] - nums[numsSize - 1] * nums[numsSize - 2]);
}
