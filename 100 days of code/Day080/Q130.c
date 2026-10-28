/*
Q130: Store multiple student records in file using fprintf(), read using fscanf() and display.
Output:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 0;

    struct Student s[n];
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    // Reading back
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    char name[50];
    int roll, marks;
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
