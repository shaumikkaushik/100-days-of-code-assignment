/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Input: 15/04/2025
Output: 15-Apr-2025
*/
#include <stdio.h>

int main() {
    int d, m, y;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    if (scanf("%d/%d/%d", &d, &m, &y) == 3) {
        if (m >= 1 && m <= 12) {
            printf("%02d-%s-%04d\n", d, months[m], y);
        } else {
            printf("Invalid month\n");
        }
    }
    return 0;
}
