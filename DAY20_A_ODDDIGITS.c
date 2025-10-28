// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n,product=1;
    int odd=0;
    printf("Enter number: ");
    scanf("%d",&n);

    int original=n;
    while(n>0){
        int digit=n%10;
        if(digit % 2 !=0){
        product*=digit;
        odd=1;
        }
        n=n/10;
    }
    if(odd){
    printf("The product of odd digits of %d is %d",original,product);
    }else{
        printf("There is no odd number in %d",original);
    }
    return 0;
}
