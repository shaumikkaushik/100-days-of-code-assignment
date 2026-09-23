/*
Q89: Count frequency of a given character in a string.
Input: programming
       g
Output: 2
*/
#include <stdio.h>

int main() {
    char str[1000], ch;
    if (scanf("%s", str) == 1) {
        scanf(" %c", &ch);
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ch)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
