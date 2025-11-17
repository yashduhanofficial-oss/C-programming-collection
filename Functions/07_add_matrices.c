#include <stdio.h>

void addMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[10][10], int rows, int cols) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, i, j;
    int mat1[10][10], mat2[10][10], sum[10][10];
    
    printf("Yash - 125113002\n");
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    addMatrices(mat1, mat2, sum, rows, cols);
    
    printf("Sum of matrices:\n");
    displayMatrix(sum, rows, cols);
    
    return 0;
}
