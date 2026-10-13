/*
Q115: Check if two strings are valid anagrams.
Input: s = "anagram", t = "nagaram" -> Output: Anagram
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    printf("Enter two strings: ");
    if (scanf("%s %s", s, t) != 2) return 0;

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
