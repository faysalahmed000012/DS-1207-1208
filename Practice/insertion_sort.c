#include <stdio.h>

int main()
{

    int myArr[] = {102, 5, 6, 4, 2, 9, 3};
    int i, j;
    // insertion sort
    int len = sizeof(myArr) / sizeof(myArr[0]);
    for (i = 0; i < len; i++)
    {
        int temp = myArr[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (myArr[j] > temp)
            {
                myArr[j + 1] = myArr[j];
            }
            else
            {
                break;
            }
        }
        myArr[j + 1] = temp;
    }

    printf("Sorted Array \n");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", myArr[i]);
    }

    return 0;
}