// Question: read and print a matrix. 
include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if(j != cols - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
