int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    if (valueA > valueB)
        return 1;
    else
        return -1;
}
int majorityElement(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    int currentCount = 1;
    int maxCount = 1;
    int maxValue = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            currentCount++;  
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                maxValue = nums[i];
            }
        }
        else
        {
            currentCount = 1;
        }

    }
    return maxValue;
}
