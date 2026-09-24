/*
Q92: Find the first repeating lowercase alphabet in a string.
Input: stress
Output: s
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (scanf("%s", str) == 1) {
        int freq[26] = {0};
        char ans = '\0';
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                freq[str[i] - 'a']++;
                if (freq[str[i] - 'a'] == 2) {
                    ans = str[i];
                    break;
                }
            }
        }
        if (ans != '\0')
            printf("%c\n", ans);
        else
            printf("None\n");
    }
    return 0;
}
