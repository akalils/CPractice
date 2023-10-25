

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int row = matrixSize;
    int column = matrixColSize[0];
    int rowMin[100000];
    int columnMax[100000];
    int *ret = (int *)malloc(sizeof(int) * row * column);
    for (int i = 0; i < row; i++)
    {
        rowMin[i] = 100000;
        for (int j = 0; j < column; j++)
        {
            rowMin[i] = min(rowMin[i], matrix[i][j]);
        }
    }
    for (int j = 0; j < column; j++)
    {
        columnMax[j] = 0;
        for (int i = 0; i < row; i++)
        {
            columnMax[j] = max(columnMax[j], matrix[i][j]);
        }
    }
    *returnSize = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == rowMin[i] && matrix[i][j] == columnMax[j])
                ret[(*returnSize)++] = matrix[i][j];
        }
    }
    return ret;
}
