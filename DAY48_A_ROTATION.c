Q.  //Check if one string is a rotation of another.

SOL #include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function checks if str2 is a rotation of str1
int areRotations(char* str1, char* str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);

    // Check if sizes of two strings are same
    if (size1 != size2) return 0;

    // Create a temp string with value str1.str1
    char* temp = (char*)malloc(sizeof(char) * (size1 * 2 + 1));
    temp[0] = '\0';
    strcat(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    char* ptr = strstr(temp, str2);

    free(temp); // Free dynamically allocated memory

    return (ptr != NULL);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    if (areRotations(str1, str2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");

    return 0;
}
