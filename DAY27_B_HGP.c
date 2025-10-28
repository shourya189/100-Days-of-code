//: Write a program to print the following pattern:
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include <stdio.h>

int main() {
    int i, j;
    int n = 4; // Number of layers for the upper half (including the middle)

    // Upper half of the diamond
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(i = n - 1; i >= 1; i--) {
        for(j = n; j > i; j--) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
