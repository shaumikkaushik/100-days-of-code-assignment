/*
Q96: Reverse each word in a sentence without changing the word order.
Input: I love coding
Output: I evol gnidoc
*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        char *wordStart = str;
        char *temp = str;
        while (*temp) {
            if (*temp == ' ') {
                reverse(wordStart, temp - 1);
                wordStart = temp + 1;
            }
            temp++;
        }
        reverse(wordStart, temp - 1);
        printf("%s\n", str);
    }
    return 0;
}
