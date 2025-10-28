// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    int original = n;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    printf("The sum of digits of %d is %d", original, sum);
    return 0;
}
