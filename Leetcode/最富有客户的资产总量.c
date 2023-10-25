

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int row = accountsSize;
    int column = accountsColSize[0];
    int max = 0, ans = 0;
    for (int i = 0; i < row; i++)
    {
        ans = 0;
        for (int j = 0; j < column; j++)
        {
            ans += accounts[i][j];
        }
        if (ans > max)
            max = ans;
    }
    return max;
}
