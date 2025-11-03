Q.  //Check if two strings are anagrams of each other.

sol. int freq = {0}; // support full unsigned char range

for (size_t i = 0; i < strlen(s1); ++i) {
    freq[(unsigned char)s1[i]]++;
    freq[(unsigned char)s2[i]]--;
}

for (int i = 0; i < 256; ++i) {
    if (freq[i] != 0) return 0;
}
return 1;

}
int main(void) 
{ const char *a = “listen”
; const char *b = “silent”;

if (are_anagrams(a, b)) {
    printf("Anagrams\n");
} else {
    printf("Not Anagrams\n");
}
return 0;
