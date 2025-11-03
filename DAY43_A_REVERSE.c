Q  //Reverse a string.

SOL.  
#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int l = 0;
    int r = strlen(str) - 1;
    char temp;

    // Swap characters till l and r meet
    while (l < r) {
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}

int main() {
    char str[100] = "example";
    reverse(str);
    printf("%s\n", str); // Output: elpmaxe
    return 0;
}
