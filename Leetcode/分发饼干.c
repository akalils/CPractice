
int cmp(const void *a, const void *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    return valueA > valueB ? 1 : -1;
}
int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int count = 0;
    int i = gSize - 1;
    int j = sSize - 1;
    while(i >= 0 && j >= 0)
    {
        if (s[j] >= g[i])
        {
            count++;
            i--; j--;
        }
        else
            i--;
    }
    return count;
}
