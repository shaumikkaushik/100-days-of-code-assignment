/*
Q94: Find the longest word in a sentence.
Input: I love programming
Output: programming
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000] = "", current[1000];
    int maxLen = 0;
    while (scanf("%s", current) == 1) {
        int len = strlen(current);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, current);
        }
    }
    printf("%s\n", longest);
    return 0;
}
