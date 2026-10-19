/*
Q121: Create info.txt in write mode, save user name and age using fprintf().
Output: File created successfully! Data written to info.txt
*/
#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("Enter name: ");
    if (scanf("%s", name) != 1) return 0;
    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 0;

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
