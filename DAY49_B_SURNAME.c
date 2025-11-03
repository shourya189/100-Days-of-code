Q.  //Print initials of a name with the surname displayed in full.

SOL. #include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin); // Read full name including spaces

    int len = strlen(name);

    // Remove newline character at the end if present
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    int i = 0;
    int start = 0;
    int last_space = -1;

    // Find last space to identify surname
    for (i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            last_space = i;
        }
    }

    // Print initials of all words before the surname
    i = 0;
    while (i <= last_space) {
        // Skip leading spaces
        while (name[i] == ' ' && i <= last_space) i++;

        // Print the initial of the current word
        if (i <= last_space && isalpha(name[i])) {
            printf("%c. ", toupper(name[i]));
        }

        // Move to next space or end of string
        while (name[i] != ' ' && name[i]
