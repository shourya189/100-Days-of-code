Q  //Count frequency of a given character in a string.

SOL. #include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count the occurrences of ch in str
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
