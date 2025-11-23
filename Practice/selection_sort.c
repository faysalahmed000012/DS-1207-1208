#include <stdio.h>

int main()
{

    int myArr[] = {102, 5, 6, 4, 2, 9, 3};

    // selection sort
    int len = sizeof(myArr) / sizeof(myArr[0]);
    for (int i = 0; i < len; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (myArr[j] < myArr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = myArr[i];
        myArr[i] = myArr[minIndex];
        myArr[minIndex] = temp;
    }

    printf("sorted Array : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", myArr[i]);
    }

    return 0;
}