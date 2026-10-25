/*
Q127: Read text from input.txt, convert lowercase to uppercase, write to output.txt.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error creating output.txt!\n");
        fclose(in);
        return 1;
    }

    char ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper((unsigned char)ch), out);
    }

    fclose(in);
    fclose(out);
    printf("Output written to output.txt successfully.\n");
    return 0;
}
