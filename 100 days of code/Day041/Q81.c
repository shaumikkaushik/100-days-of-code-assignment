#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Count characters
    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}