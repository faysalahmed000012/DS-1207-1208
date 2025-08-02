#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    // Insert elements into the array
    printf("How many elements you want to insert? ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Traverse Operation
    printf("Array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion Operation
    int pos, val;
    printf("Enter position to insert:(0 to %d): ", n - 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Shift elements right to make space
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion operation
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Shift elements left to fill the gap
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Search operation
    printf("Enter value to search: ");
    scanf("%d", &val);

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            printf("Value found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Value not found in the array.\n");
    }

    // Update operation
    printf("Enter position to update (0 to %d): ", n - 1);
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &val);

    arr[pos] = val;

    printf("Array after update: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}