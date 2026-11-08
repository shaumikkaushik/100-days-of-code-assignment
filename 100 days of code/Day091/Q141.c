/*
Q141: Structure Student with name, roll_no, marks, read and print one student's data.
Output: Name: Asha | Roll: 101 | Marks: 90
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    printf("Enter Name, Roll No, Marks: ");
    if (scanf("%s %d %d", s.name, &s.roll_no, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    }
    return 0;
}
