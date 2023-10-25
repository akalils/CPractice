

int diagonalSum(int** mat, int matSize, int* matColSize){
    int row = matSize;
    int column = matColSize[0];
    int ans = 0;
    for (int i = 0; i < row; i++)
        ans += mat[i][i];
    for (int i = 0; i < row; i++)
        ans += mat[i][row - i - 1];
    if (row % 2)
        ans -= mat[row / 2][row / 2];
    return ans;
}
