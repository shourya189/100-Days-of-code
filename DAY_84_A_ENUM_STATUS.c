/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};          
int main() {
    enum Status currentStatus;
    char input[10];
    scanf("%s", input);
    if (strcmp(input, "SUCCESS") == 0) {
        currentStatus = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        currentStatus = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        currentStatus = TIMEOUT;
    } else {
        printf("Invalid status\n");
        return 1;
    }
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    
    return 0;
}
