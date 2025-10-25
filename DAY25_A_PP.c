//Write a program to print the following pattern:
//5
//45
//345
//2345
//12345

#include <stdio.h>
int n = 5;
int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
