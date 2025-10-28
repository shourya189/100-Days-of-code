// Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int n, digit, strongnum = 0, original, factorial = 1;
    printf("Enter the number here: ");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        factorial = 1;
        digit = n % 10;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        strongnum += factorial;

        n = n / 10;
    }
    if (strongnum == original)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }

    return 0;
}
