/*
Q120: Change string to sentence / title case (capitalize first letter of each word).
Input: str = I am trying to build logic.
Output: I Am Trying To Build Logic.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int capitalizeNext = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (isspace(str[i])) {
                capitalizeNext = 1;
            } else if (capitalizeNext && isalpha(str[i])) {
                str[i] = toupper(str[i]);
                capitalizeNext = 0;
            }
        }
        printf("%s", str);
    }
    return 0;
}
