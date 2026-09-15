#include <stdio.h>

int main() {

    int matrix[10][10], sum[10];
    int rows, columns;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter the matrix:\n");

    for (i = 0; i < rows; i++) {

        sum[i] = 0;

        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    printf("Row sums:\n");

    for (i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}