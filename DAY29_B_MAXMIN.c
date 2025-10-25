// Find the maximum and minimum element in an array.
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the limit of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Maximum number= %d  Minimum number= %d ", max, min);

    return 0;
}
