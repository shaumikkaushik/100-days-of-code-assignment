/*
Q114: Length of longest substring without repeating characters.
Input: s = "abcabcbb" -> Output: 3
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    if (scanf("%s", s) != 1) return 0;

    int lastPos[256];
    for (int i = 0; i < 256; i++) lastPos[i] = -1;

    int maxLen = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastPos[ch] >= start) {
            start = lastPos[ch] + 1;
        }
        lastPos[ch] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }
    printf("%d\n", maxLen);
    return 0;
}
