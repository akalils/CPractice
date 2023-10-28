
int check (int **mat, int matSize, int matColSize, int row, int column)
{
    if (mat[row][column] != 1)
        return 0;
    for (int i = 0; i < matSize; i++)
    {
        if (i != row && mat[i][column] != 0)
            return 0;
    }
    for (int i = 0; i < matColSize; i++)
    {
        if (i != column && mat[row][i] != 0)
            return 0;
    }
    return 1;
}
int numSpecial(int** mat, int matSize, int* matColSize){
    int sum = 0;
    for (int i = 0; i < matSize; i++)
    {
        for (int j = 0; j < matColSize[i]; j++)
            sum += check(mat, matSize, matColSize[i], i, j);
    }
    return sum;
}
