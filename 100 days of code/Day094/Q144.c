/*
Q144: Write a function that accepts a structure as parameter and prints its members.
Input: Student: Neha 104 92
Output: Name: Neha | Roll: 104 | Marks: 92
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void displayStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;
    printf("Enter Name, Roll, Marks: ");
    if (scanf("%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        displayStudent(s);
    }
    return 0;
}
