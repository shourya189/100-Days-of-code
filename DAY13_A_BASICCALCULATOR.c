// : Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Divide by zero error\n");
                return 1;
            }
            printf("%d\n", result);
            break;
        case '%':
            if(num2 != 0)
                result = num1 % num2;
            else {
                printf("Divide by zero error\n");
                return 1;
            }
            printf("%d\n", result);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
