/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char s[200],t[200];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s",t);
    if(strlen(s)!=strlen(t)){
        printf("Not Anagrams");
    exit(0);
}
    int count[256];  
    for (int i = 0; i<256; i++)
        count[i]=0;
    for (int i = 0; s[i] != '\0'; i++) {
       count[(unsigned char)s[i]]++;
       count[(unsigned char)t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
           printf("Not Anagrams");
           exit(0);
        }
    }

    printf("Anagrams");
    return 0;
}
