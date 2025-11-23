#include <stdio.h>
#include <string.h>

// add 'very' before word 'good'
void veryGood()
{
    char str[200], result[400];
    printf("Enter a sentence with the word 'good' : ");
    gets(str);

    result[0] = '\0';
    char *word = strtok(str, " ");

    while (word != NULL)
    {
        if (strcmp(word, "good") == 0)
        {
            strcat(result, "very ");
        }
        strcat(result, word);
        strcat(result, " ");
        word = strtok(NULL, " ");
    }

    printf("Result: %s\n", result);
}

// remove extra spaces in a sentence
void removeExtraSpace()
{

    char str[200], result[100];

    int i = 0, j = 0;

    printf("Enter a string with extra spaces: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            result[j++] = str[i];
        }
        else if (str[i] == ' ' && result[j - 1] != ' ')
        {
            result[j++] = str[i];
        }
        i++;
    }

    result[j] = '\0';

    printf("Result: %s\n", result);
}

// replace vowels with *
void replaceVowels()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            str[i] = '*';
        }
    }

    printf("Result: %s\n", str);
}

int main()
{
    int choice;

    printf("Choose a program:\n");
    printf("1. Insert 'very' before 'good'\n");
    printf("2. Remove extra spaces\n");
    printf("3. Replace vowels with *\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    case 1:
        veryGood();
        break;
    case 2:
        removeExtraSpace();
        break;
    case 3:
        replaceVowels();
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}