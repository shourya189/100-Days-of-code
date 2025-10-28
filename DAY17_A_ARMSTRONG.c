// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, rem, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        result += pow(rem, digits);
        temp = temp / 10;
    }

    if (result == original)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not Armstrong Number\n");
    }

    return 0;
}
