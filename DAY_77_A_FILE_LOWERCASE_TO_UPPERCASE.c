/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
int main() {
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch-=32; 
        }
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("Conversion completed.\n");
    return 0;
}
