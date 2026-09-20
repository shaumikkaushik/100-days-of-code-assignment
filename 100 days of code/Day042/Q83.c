#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Print uppercase string
    printf("%s", str);

    return 0;
}