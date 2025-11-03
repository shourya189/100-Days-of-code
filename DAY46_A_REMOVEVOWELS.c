Q.  //Remove all vowels from a string.

SOL.  #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    // Remove newline character if present from fgets
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--; // Decrement i to check the new character shifted to position i
        }
    }

    printf("String after removing vowels: %s\n", str);
    return 0;
}
