#include <stdio.h>
int main()
{
    int A[100];
    int n, i, j;

    printf("Enter number of array elements:");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Insertion Sort

    for (i = 1; i < n; i++)
    {
        int temp = A[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (A[j] > temp)
            {
                A[j + 1] = A[j];
            }
            else
            {
                break;
            }
        }

        A[j + 1] = temp;
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}