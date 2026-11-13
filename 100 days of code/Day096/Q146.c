/*
Q146: Employee structure with nested Date structure for joining date.
Output: Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee e;
    printf("Enter Employee Name, ID, Joining Date (DD MM YYYY): ");
    if (scanf("%s %d %d %d %d", e.name, &e.id, &e.joinDate.day, &e.joinDate.month, &e.joinDate.year) == 5) {
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
               e.name, e.id, e.joinDate.day, e.joinDate.month, e.joinDate.year);
    }
    return 0;
}
