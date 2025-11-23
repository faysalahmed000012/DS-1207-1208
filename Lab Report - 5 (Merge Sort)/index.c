#include <stdio.h>

int temp[100];

void Merge(int A[], int l, int mid, int h)
{
    int i = l;
    int j = mid + 1;
    int k = l;

    while (i <= mid && j <= h)
    {
        if (A[i] <= A[j])
        {
            temp[k] = A[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = A[j];
            j++;
            k++;
        }
    }

    if (i > mid)
    {
        while (j <= h)
        {
            temp[k] = A[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[k] = A[i];
            i++;
            k++;
        }
    }

    // copy back
    for (k = l; k <= h; k++)
    {
        A[k] = temp[k];
    }

    // Print the array after each merge
    printf("After merging a subarray: ");
    for (int p = 0; p <= h; p++)
    {
        printf("%d ", A[p]);
    }
    printf("\n");
}

void MergeSort(int A[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, mid, h);
    }
}

int main()
{
    int n, i;
    int A[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("\nSorting steps:\n");
    MergeSort(A, 0, n - 1);

    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);

    printf("\n");
    return 0;
}