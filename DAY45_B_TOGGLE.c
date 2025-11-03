Q.  //Toggle case of each character in a string.

SOL. #include <stdio.h>
#define MAX_SIZE 100

// Function to toggle case of each character in the string
void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        }
        i++;
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter any string: ");
    fgets(str, MAX_SIZE, stdin);  // Safer alternative to gets

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}
