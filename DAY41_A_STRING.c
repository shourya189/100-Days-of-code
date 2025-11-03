Q  //Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[] = "Count the characters!";
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Number of characters: %d\n", count);
    return 0;
}
