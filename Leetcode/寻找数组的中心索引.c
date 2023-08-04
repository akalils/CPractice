//
// Created by 黎圣  on 2023/8/4.
//
#include "stdio.h"
int pivotIndex(int* nums, int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
        sum += nums[i];
    int left = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum -= nums[i];
        if (sum == left)
            return i;
        left += nums[i];
    }
    return -1;
}
int main()
{
    int nums[] = {1, 7, 3, 6, 5, 6};
    printf("%d", pivotIndex(nums, 6));
    return 0;
}
