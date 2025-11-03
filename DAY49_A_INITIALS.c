Q.  //Print the initials of a name.

SOL #include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i;

    printf("Enter a name: ");
    fgets(s, sizeof(s), stdin);

    printf("The initials of the name are: ");
    for (i = 0; i < strlen(s); i++) {
        if (i == 0 && s[i] != ' ') {
            // Print the first character
            printf("%c", s[i]);
        } else if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0' && s[i + 1] != '\n') {
            // Print dot then first character after space
            printf(".%c", s[i + 1]);
        }
    }
    printf("\n");

    return 0;
}
