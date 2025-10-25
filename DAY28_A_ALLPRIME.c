// Write a program to print all the prime numbers from 1 to n.



#include <stdio.h>

int main() {
    int i,j,n,isprime=1;
    printf("Enter the limit: ");
    scanf("%d",&n);

    for(i=2; i<=n; i++){
        isprime=1;
        for(j=2; j<=i-1; j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        
            }
            if(isprime){
                printf("%d\t",i);
            }
        }
    
    return 0;
}
