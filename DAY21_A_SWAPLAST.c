//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, digits = 0, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp >= 10)
    {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;
    lastDigit = num % 10;

    int power = 1;
    for (int i = 0; i < digits; i++)
    {
        power *= 10;
    }

    int middle = (num % power) / 10;
    swappedNum = lastDigit * power + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
