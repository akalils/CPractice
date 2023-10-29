int removeElement(int* nums, int numsSize, int val){
    for (int i = 0; i < numsSize; i++)
    {
        while (i < numsSize && nums[i] == val)
        {
            int temp = nums[i];
            nums[i] = nums[numsSize - 1];
            nums[numsSize - 1] = temp;
            numsSize--;
        }
    }
    return numsSize;
}   
