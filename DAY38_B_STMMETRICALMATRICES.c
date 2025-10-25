// Question: check if a matrix is symmetry.
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d %d", &n, &n);  // Symmetric matrix must be square

    int matrix[n][n];
    int symmetric = 1; 

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric)
            break;
    }

    if(symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
