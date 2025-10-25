// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter the limit of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("The sum of elements of array is: %d",sum);
    return 0;
}
