/*
Q143: Find and print the student with the highest marks.
Input: 3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output: Topper: Ravi (Marks: 95)
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 0;

    struct Student s[n];
    int maxIdx = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[maxIdx].marks) {
            maxIdx = i;
        }
    }
    printf("Topper: %s (Marks: %d)\n", s[maxIdx].name, s[maxIdx].marks);
    return 0;
}
