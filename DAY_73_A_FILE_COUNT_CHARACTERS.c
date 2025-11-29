/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
int main(){
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 0;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        }
         else if (inWord == 0) {
                wordCount++;
                inWord = 1;
            } 
    }
   
    if (charCount > 0 && ch != '\n') {
     lineCount++;
    }

    fclose(file);

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
