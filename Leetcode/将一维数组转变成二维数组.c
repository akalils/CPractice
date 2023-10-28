

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **myMalloc(int row, int column, int *returnSize, int **returnColumnSizes)
{
    int **ret = (int **)malloc(sizeof(int *) * row);
    *returnSize = row;
    *returnColumnSizes = (int *)malloc(sizeof(int) * row);
    for (int i = 0; i < row; i++)
    {
        ret[i] = (int *)malloc(sizeof(int) * column);
        (*returnColumnSizes)[i] = column;
    }
    return ret;
}
int** construct2DArray(int* original, int originalSize, int m, int n, int* returnSize, int** returnColumnSizes){
    int **ret = myMalloc(m, n, returnSize, returnColumnSizes);
    if (originalSize != m * n)
    {
        *returnSize = 0;
        return ret;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ret[i][j] = original[i * n + j];
        }
    }
    return ret;
}
