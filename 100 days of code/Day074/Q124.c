/*
Q124: Copy content from source file to destination file using fgetc() and fputc().
Output: File copied successfully to destination.txt
*/
#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: ");
    if (scanf("%s", src) != 1) return 0;
    printf("Enter destination filename: ");
    if (scanf("%s", dest) != 1) return 0;

    FILE *fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }
    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error: Cannot open destination file!\n");
        fclose(fs);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
