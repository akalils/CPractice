int mechanicalAccumulator(int target) 
{
    int sum = 0;
    for (int i = 1; i <= target; i++)
    {
        sum = sum + i;
    }
    return sum;    
}
