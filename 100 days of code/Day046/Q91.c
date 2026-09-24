/*
Q91: Remove all vowels from a string.
Input: education
Output: dctn
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], res[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int k = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                continue;
            res[k++] = str[i];
        }
        res[k] = '\0';
        printf("%s", res);
    }
    return 0;
}
