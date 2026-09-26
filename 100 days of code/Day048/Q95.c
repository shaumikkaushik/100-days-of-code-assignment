/*
Q95: Check if one string is a rotation of another.
Input: abcde
       deabc
Output: Rotation
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], temp[2000];
    if (scanf("%s %s", s1, s2) == 2) {
        if (strlen(s1) != strlen(s2)) {
            printf("Not rotation\n");
            return 0;
        }
        strcpy(temp, s1);
        strcat(temp, s1);
        if (strstr(temp, s2) != NULL)
            printf("Rotation\n");
        else
            printf("Not rotation\n");
    }
    return 0;
}
