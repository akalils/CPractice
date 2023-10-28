

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **myMalloc(int row, int column, int *returnSize, int **returnColumnSizes)
{
    int **ret = (int **)malloc(sizeof(int *) * row);
    *returnColumnSizes = (int *)malloc(sizeof(int) * row);
    *returnSize = row;
    for (int i = 0; i < row; i++)
    {
        ret[i] = (int *)malloc(sizeof(int) * column);
        (*returnColumnSizes)[i] = column;
    }
    return ret;
}
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    int row = matSize;
    int column = matColSize[0];
    int **ret = myMalloc(r, c, returnSize, returnColumnSizes);
    if (row * column != r * c)
    {
        *returnSize = row;
        for (int i = 0; i < row; i++)
            (*returnColumnSizes)[i] = column;
        return mat;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int id = i * c + j;
            int x = mat[id/column][id%column];
            ret[i][j] = x;
        }
    }
    return ret;
}
