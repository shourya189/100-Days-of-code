// Question: add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];

  
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];

  
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    if(r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("%d", A[i][j] + B[i][j]);
            if(j != c1 - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
