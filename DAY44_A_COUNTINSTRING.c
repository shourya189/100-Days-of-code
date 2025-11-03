Q.  //Count spaces, digits, and special characters in a string.

SOL. #include <stdio.h>

int main() {
    char str[100];
    int countSpaces = 0, countDigits = 0, countSpecialChars = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safe alternative to gets

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            countSpaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            countDigits++;
        } else if (!( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
            // Not a letter or digit or space means special character
            if (str[i] != '\n') { // ignore newline from fgets
                countSpecialChars++;
            }
        }
    }

    printf("Spaces: %d\n", countSpaces);
    printf("Digits: %d\n", countDigits);
    printf("Special Characters: %d\n", countSpecialChars);

    return 0;
}
