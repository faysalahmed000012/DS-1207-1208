#include <stdio.h>
int main()
{
    int A[100];
    int n, i, j;

    // array input
    printf("Enter number of array elements:");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Bubble Sort algorithm

    for (i = 0; i < n - 1; i++)
    {
        // boolean flag to make sure it doesn't run on already sorted array.
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {

            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}