#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    // Print the modified string
    printf("%s", str);

    return 0;
}