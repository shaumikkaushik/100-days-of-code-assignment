/*
Q147: Store employee data in binary file using fwrite() and read using fread().
*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Raj", 11, 55000.0f}, e2;

    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for write!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for read!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee read from file: Name: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);
    return 0;
}
