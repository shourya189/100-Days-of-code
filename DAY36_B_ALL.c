// Question: find the sum of all elements in a matrix. 

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0, value;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &value);
            sum += value;
        }
    }

    printf("%d\n", sum);

    return 0;
}
