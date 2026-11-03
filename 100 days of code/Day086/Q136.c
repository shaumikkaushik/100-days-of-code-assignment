/*
Q136: Enum for menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Input: ADD 10 20 -> Output: 30
*/
#include <stdio.h>
#include <string.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    char opStr[20];
    int a, b;
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) and two numbers: ");
    if (scanf("%s %d %d", opStr, &a, &b) == 3) {
        enum Operation op;
        if (strcmp(opStr, "ADD") == 0) op = ADD;
        else if (strcmp(opStr, "SUBTRACT") == 0) op = SUBTRACT;
        else if (strcmp(opStr, "MULTIPLY") == 0) op = MULTIPLY;
        else {
            printf("Invalid operation\n");
            return 0;
        }

        switch (op) {
            case ADD: printf("%d\n", a + b); break;
            case SUBTRACT: printf("%d\n", a - b); break;
            case MULTIPLY: printf("%d\n", a * b); break;
        }
    }
    return 0;
}
