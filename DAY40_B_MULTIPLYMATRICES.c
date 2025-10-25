// Question: Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];

    // Read elements of first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];

    // Read elements of second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int C[r1][c2];

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d", C[i][j]);
            if (j != c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
