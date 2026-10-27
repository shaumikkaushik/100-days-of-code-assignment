/*
Q129: Read integers from numbers.txt separated by spaces, compute sum and average.
Output:
Sum = 150
Average = 30.00
*/
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int num, count = 0;
    double sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    if (count > 0) {
        printf("Sum = %.0f\nAverage = %.2f\n", sum, sum / count);
    } else {
        printf("No numbers found in file.\n");
    }
    return 0;
}
