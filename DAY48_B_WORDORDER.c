Q.  //Reverse each word in a sentence without changing the word order.

SOL. #include <stdio.h>
#include <string.h>

// Function to reverse characters between two pointers
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse each word in the sentence
void reverseWordsInSentence(char* sentence) {
    char* word_start = sentence;
    char* temp = sentence;

    while (*temp) {
        temp++;
        if (*temp == ' ' || *temp == '\0') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
}

int main() {
    char sentence[] = "Reverse each word in a sentence without changing the word order";
    printf("Original sentence: %s\n", sentence);

    reverseWordsInSentence(sentence);

    printf("Sentence with each word reversed: %s\n", sentence);
    return 0;
}
