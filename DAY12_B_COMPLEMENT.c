// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main()
{
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else
        {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 1;
        }
    }

    printf("1's complement = %s\n", binary);
    return 0;
}
