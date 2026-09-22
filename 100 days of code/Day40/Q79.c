#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j, d;

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

    // Diagonal traversal
    for(d = 0; d < r + c - 1; d++)
    {
        for(i = 0; i < r; i++)
        {
            j = d - i;

            if(j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}