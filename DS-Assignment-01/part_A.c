#include <stdio.h>

int main()
{
    char str[200], reversed[200];
    int i, length = 0, vowels = 0, consonants = 0;

    // Read string from user
    printf("Enter a string: ");
    gets(str);

    // Calculate length without strlen
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length: %d\n", length);

    // Count vowels and consonants
    for (i = 0; i < length; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
                str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    // Reverse the string
    for (i = 0; i < length; i++)
    {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    printf("Reversed: %s\n", reversed);

    return 0;
}