#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], sum[10][10];
    int i, j;

    // Input size of first matrix
    scanf("%d %d", &r1, &c1);

    // Input first matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input size of second matrix
    scanf("%d %d", &r2, &c2);

    // Input second matrix
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Check whether addition is possible
    if(r1 != r2 || c1 != c2)
    {
        printf("Matrix addition is not possible");
        return 0;
    }

    // Add the matrices
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the result
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}