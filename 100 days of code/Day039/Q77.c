#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j;
    int distinct = 1;

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

    // Diagonal elements can only be checked in a square matrix
    if(r != c)
    {
        printf("False");
        return 0;
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < r; i++)
    {
        for(j = i + 1; j < r; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
        {
            break;
        }
    }

    // Print result
    if(distinct == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}