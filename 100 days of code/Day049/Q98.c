/*
Q98: Print initials of a name with the surname displayed in full.
Input: John David Doe
Output: J.D. Doe
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], words[50][100];
    int count = 0;
    while (scanf("%s", words[count]) == 1) {
        count++;
    }
    if (count == 0) return 0;
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", words[i][0]);
    }
    if (count > 1) printf(" ");
    printf("%s\n", words[count - 1]);
    return 0;
}
