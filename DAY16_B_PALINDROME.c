//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(originalNum == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
