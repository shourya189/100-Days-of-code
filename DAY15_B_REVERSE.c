//Q30: Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("%d\n", reversed);
    return 0;
}
