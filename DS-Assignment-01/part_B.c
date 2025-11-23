#include <stdio.h>
#include <string.h>

// Function to insert a substring in a certain position.

void inserter(char *str, char *subStr, int position, char *result)
{
    strncpy(result, str, position);
    result[position] = '\0';
    strcat(result, subStr);
    strcat(result, str + position);
}

// Function to delete certain part of a string.
void deleter(char *str, int position, int len, char *result)
{
    strncpy(result, str, position);
    result[position] = '\0';
    strcat(result, str + position + len);
}

// Function to replace  certain part of string with another string.
void replacer(char *str, int position, int len, char *replacement, char *result)
{
    strncpy(result, str, position);
    result[position] = '\0';
    strcat(result, replacement);
    strcat(result, str + position + len);
}

int main()
{

    char name[] = "Ranada Saha";
    char result[100];

    // Insert
    inserter(name, " Prashad", 6, result);
    printf("Insert: %s\n", result);

    // Delete
    deleter(name, 6, 5, result);
    printf("Delete: %s\n", result);

    // Replace
    replacer(name, 0, 6, "RP", result);
    printf("Replace: %s\n", result);

    return 0;
}