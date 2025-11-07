
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = matrixSize;          
    int cols = *matrixColSize;      

    int** ans = malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        ans[i] = malloc(rows * sizeof(int));
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans[j][i] = matrix[i][j];
        }
    }

    
    *returnSize = cols;
    *returnColumnSizes = malloc(cols * sizeof(int));
    for (int i = 0; i < cols; i++) {
        (*returnColumnSizes)[i] = rows;
    }

    return ans;
}
