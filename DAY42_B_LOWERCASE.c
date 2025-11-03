Q.  //Convert a lowercase string to uppercase without using built-in functions.

SOL. #include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a lowercase string: ");
    gets(str); // Note: gets() is unsafe for buffer overflows, consider using fgets() in real programs

    for (i = 0; str[i] != '\0'; i++) {
        // If character is between 'a' and 'z', convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
