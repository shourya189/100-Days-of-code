// Count even and odd numbers in an array.
#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0, i;
    printf("Enter the limit of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even count= %d  Odd count= %d", even, odd);
    return 0;
}
