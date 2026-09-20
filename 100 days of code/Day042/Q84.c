#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Check each character
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
               str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
               str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}