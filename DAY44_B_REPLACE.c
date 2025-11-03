Q.  //Replace spaces with hyphens in a string.

SOL. #include <stdio.h>

void replaceSpaces(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces

    replaceSpaces(str);

    printf("Modified string: %s", str);

    return 0;
}
