int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    if (valueA > valueB)
        return 1;
    else
        return -1;
}
bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 1; i < numsSize; i++)
    {
        if(nums[i] == nums[i - 1])
            return true;
    }
    return false;
}
