Q.  //Find the longest word in a sentence.

SOL. #include <stdio.h>
#include <string.h>

int main() {
    char s[1024];                  // Input string
    char longest_word[1024];       // To store the longest word
    int max_length = 0, current_length = 0;
    int i, start_idx = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Remove newline character if present

    int len = strlen(s);
    for (i = 0; i <= len; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                strncpy(longest_word, &s[start_idx], current_length);
                longest_word[current_length] = '\0'; // Null-terminate
            }
            current_length = 0;
            start_idx = i + 1;
        }
    }

    printf("Longest word: %s\n", longest_word);
    return 0;
}
