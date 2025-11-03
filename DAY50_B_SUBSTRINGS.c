Q.  //Print all sub-strings of a string.

SOL. #include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abc";  // Input string
    int len = strlen(s);

    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");  // New line for each substring
        }
    }
    return 0;
}
