/*
Q125: Open file in append mode and append user entered text.
Output: File updated successfully with appended text.
*/
#include <stdio.h>

int main() {
    char filename[100], text[500];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;

    getchar(); // consume newline
    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 0;

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
