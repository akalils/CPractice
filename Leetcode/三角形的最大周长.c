int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    return valueA > valueB ? 1 : -1;
}
int largestPerimeter(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    int a, b, c;
    for (int i = numsSize - 1; i >= 2; i--)
    {
        c = nums[i];
        a = nums[i - 1];
        b = nums[i - 2];
        if (a + b > c)
            return a + b + c;
    }
    return 0;
}
