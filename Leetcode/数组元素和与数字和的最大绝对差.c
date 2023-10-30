int abs1 (int a, int b)
{
    if (a - b >= 0)
        return a - b;
    if (a - b < 0)
        return b - a;
    return a - b;
}
int differenceOfSum(int* nums, int numsSize){
    int sum = 0;
    int numSum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        while (nums[i] != 0)
        {
            numSum += nums[i] % 10;
            nums[i] /= 10;
        }
    }
    return abs1 (sum, numSum);
}
