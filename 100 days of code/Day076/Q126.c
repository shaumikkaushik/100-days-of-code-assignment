/*
Q126: Check if file exists. If NULL print error, else read and display content.
*/
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    printf("File opened successfully.\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
