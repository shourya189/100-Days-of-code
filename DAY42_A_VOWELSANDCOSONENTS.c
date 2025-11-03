Q. Count vowels and consonants in a string.
   
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowel, consonant;
    vowel = consonant = 0;
    printf("Enter any string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        // Check if character is a letter
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            // Check for vowels
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
               str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
               str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    printf("Total number of vowels = %d\n", vowel);
    printf("Total number of consonants = %d\n", consonant);
    return 0;
}
