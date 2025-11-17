#include <stdio.h>

int main() {
    int n, i, j, main_diag = 0, sec_diag = 0;
    int matrix[10][10];
    
    printf("Yash - 125113002\n");
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    printf("Enter matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        main_diag += matrix[i][i];
        sec_diag += matrix[i][n-1-i];
    }
    
    printf("Main diagonal sum = %d\n", main_diag);
    printf("Secondary diagonal sum = %d\n", sec_diag);
    return 0;
}
