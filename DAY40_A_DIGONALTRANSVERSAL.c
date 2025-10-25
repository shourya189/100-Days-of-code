// Question: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    
    for(int d = 0; d <= rows + cols - 2; d++) {
        int start_row = d < cols ? 0 : d - cols + 1;
        int end_row = d < rows ? d : rows - 1;

        for(int i = start_row; i <= end_row; i++) {
            int j = d - i;
            if(j >= 0 && j < cols)
                printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}
