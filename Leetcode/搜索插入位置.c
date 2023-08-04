//
// Created by 黎圣  on 2023/8/4.
//
#include "stdio.h"
int searchInsert(int* nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        int max = nums[numsSize - 1];
        if (nums[i] == target)
            return i;
        else if (nums[i] > target)
            return i;
        else if (max < target)
            return numsSize;
    }
    return 0;
}
int main()
{
    int nums[] = {1,3,5,6};
    printf("%d", searchInsert(nums, 4, 5));
    return 0;
}
