/*
Q145: Return a structure containing top student's details from a function.
Input: 3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output: Top Student: Karan | Roll: 102 | Marks: 96
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIdx].marks) {
            topIdx = i;
        }
    }
    return s[topIdx];
}

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 0;

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    return 0;
}
