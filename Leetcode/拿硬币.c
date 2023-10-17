int minCount(int* coins, int coinsSize){
    int sum = 0;
    for (int i = 0; i < coinsSize; i++)
    {
        sum = sum + (coins[i] + 1) / 2;
    }
    return sum;
}
