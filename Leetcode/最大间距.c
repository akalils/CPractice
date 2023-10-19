int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    if (valueA > valueB)
        return 1;
    else
        return -1;
}
int maximumGap(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    if (numsSize < 2)
        return 0;
    int currentDiff = 0, maxDiff = 0;
    for (int i = 1; i < numsSize; i++)
    {
        currentDiff = nums[i] - nums[i - 1];
        if (currentDiff > maxDiff)
        {
            maxDiff = currentDiff;
        }
    }
    return maxDiff;
}
