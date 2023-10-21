
int cmp(const void *a, const *b)
{
    int valueA = *(int *)a;
    int valueB = *(int *)b;
    return valueA > valueB ? 1 : -1;
}
int numRescueBoats(int* people, int peopleSize, int limit){
    qsort(people, peopleSize, sizeof(int), cmp);
    int count = 0;
    int l = 0; 
    int r = peopleSize - 1;
    while (l <= r)
    {
        if (l == r)
            return ++count;
        else
        {
            if (people[l] + people[r] <= limit)
            {
                count++;
                l++; r--;
            }
            else
            {
                count++;
                r--;
            }
        }
    }
    return count;
}
