#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    int palindrome = 1;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length of string
    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Compare characters from both ends
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    // Print result
    if(palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}