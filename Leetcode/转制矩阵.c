

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
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes){
    int row = matrixColSize[0];
    int column = matrixSize;
    int **ret = myMalloc(row, column, returnSize, returnColumnSizes);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            ret[i][j] = matrix[j][i];
        }
    }
    return ret;
}
