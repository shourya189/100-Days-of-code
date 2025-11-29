/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter the string: ");
    scanf("%s", str);
    int last[256];  
    for (int i = 0; i < 256; i++)
        last[i] = -1;
    int left = 0, res = 0;
    for (int right = 0; str[right] != '\0'; right++) {
        if (last[(unsigned char)str[right]] >= left) {
            left = last[(unsigned char)str[right]] + 1;
        }
        last[(unsigned char)str[right]] = right;
        if (res < right - left + 1)
            res = right - left + 1;
    }

    printf("Length of longest substring without repetition: %d\n", res);
    return 0;
}
