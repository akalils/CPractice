int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    if (valueA > valueB)
        return 1;
    else
        return -1;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int findMinDifference(char ** timePoints, int timePointsSize){
    int *ret = (int *)malloc(sizeof(int) * timePointsSize);
    int a, b, ans = 1440;
    for (int i = 0; i < timePointsSize; i++)
    {
        sscanf(timePoints[i], "%d:%d", &a, &b);
        ret[i] = a * 60 + b;
    }
    qsort(ret, timePointsSize, sizeof(int), cmp);
    for (int i = 1; i < timePointsSize; i++)
        ans = min(ans, ret[i] - ret[i - 1]);
    ans = min(ans, ret[0] - ret[timePointsSize - 1] + 1440);
    return ans;
}
