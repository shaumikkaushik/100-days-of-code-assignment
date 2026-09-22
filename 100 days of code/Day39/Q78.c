#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j;
    int sum = 0;

    // Input rows and columns
    scanf("%d %d", &r, &c);

    // Input matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if matrix is square
    if(r != c)
    {
        printf("Matrix is not square");
        return 0;
    }

    // Calculate sum of main diagonal
    for(i = 0; i < r; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}