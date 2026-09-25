/*
Q93: Check if two strings are anagrams of each other.
Input: listen
       silent
Output: Anagrams
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    if (scanf("%s %s", s1, s2) == 2) {
        if (strlen(s1) != strlen(s2)) {
            printf("Not anagrams\n");
            return 0;
        }
        int count[256] = {0};
        for (int i = 0; s1[i] != '\0'; i++) {
            count[(unsigned char)s1[i]]++;
            count[(unsigned char)s2[i]]--;
        }
        int isAnagram = 1;
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
        if (isAnagram)
            printf("Anagrams\n");
        else
            printf("Not anagrams\n");
    }
    return 0;
}
