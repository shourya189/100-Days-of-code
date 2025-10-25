// write a code for sum of matrices in an array 

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSums[rows];

    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }

    for(int i = 0; i < rows; i++) {
        printf("%d", rowSums[i]);
        if(i != rows - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
