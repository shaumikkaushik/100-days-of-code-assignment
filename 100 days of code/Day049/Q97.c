/*
Q97: Print the initials of a name.
Input: John Doe
Output: J.D.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        int newWord = 1;
        for (int i = 0; i < len; i++) {
            if (str[i] != ' ' && newWord) {
                printf("%c.", str[i]);
                newWord = 0;
            } else if (str[i] == ' ') {
                newWord = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
