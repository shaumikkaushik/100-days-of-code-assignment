/*
Q137: Enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Input: GUEST -> Output: Welcome Guest!
*/
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%s", input) == 1) {
        enum Role r;
        if (strcmp(input, "ADMIN") == 0) r = ADMIN;
        else if (strcmp(input, "USER") == 0) r = USER;
        else if (strcmp(input, "GUEST") == 0) r = GUEST;
        else {
            printf("Invalid role\n");
            return 0;
        }

        switch (r) {
            case ADMIN: printf("Welcome Admin!\n"); break;
            case USER: printf("Welcome User!\n"); break;
            case GUEST: printf("Welcome Guest!\n"); break;
        }
    }
    return 0;
}
