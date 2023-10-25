
int checksame(int **matrix, int row, int column, int maxRow, int maxColumn)
{
    int step = 0;
    while (1)
    {
        if (row + step >= maxRow)
            break;
        if (column + step >= maxColumn)
            break;
        if (matrix[row + step][column + step] != matrix[row][column])
            return false;
        step++;
    }
    return true;
}
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize)
{
    int row = matrixSize;
    int column = matrixColSize[0];
    for (int i = 0; i < row; i++)
        if (checksame(matrix, i, 0, row, column) == false)
            return false;
    for (int i = 0; i < column; i++)
        if (checksame(matrix, 0, i, row, column) == false)
            return false;
    return true;
}
