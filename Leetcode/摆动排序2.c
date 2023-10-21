
int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    return valueA > valueB ? 1 : -1;
}
void wiggleSort(int* nums, int numsSize){
    int *ret = (int*)malloc(sizeof(int *) * numsSize);
    for(int i = 0; i < numsSize; i++)
        ret[i] = nums[i];
    int r = numsSize - 1;
    qsort(ret, numsSize, sizeof(int), cmp);
    for (int i = 1; i < numsSize; i += 2)
    {
        nums[i] = ret[r--];
    }
    for (int i = 0; i < numsSize; i += 2)
    {
        nums[i] = ret[r--];
    }
}
