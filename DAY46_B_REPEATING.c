Q.  //Find the first repeating lowercase alphabet in a string.

SOL . #include <stdio.h>
#include <string.h>

int firstRepeatingLowercase(char s[]) {
    int visited[26] = {0}; // Array to keep track of visited characters
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        // Check if character is lowercase alphabet
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a';

            // If already visited, return this character
            if (visited[index]) {
                return s[i];
            } else {
                visited[index] = 1; // Mark as visited
            }
        }
    }
    return -1; // No repeated lowercase alphabet found
}

int main() {
    char str[] = "examplestringwithrepeats";

    int result = firstRepeatingLowercase(str);
    if (result != -1) {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}
