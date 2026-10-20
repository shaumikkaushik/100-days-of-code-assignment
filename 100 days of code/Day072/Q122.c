/*
Q122: Open info.txt, read using fgets() until EOF, display on console.
*/
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open info.txt\n");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
