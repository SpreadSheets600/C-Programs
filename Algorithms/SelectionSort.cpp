#include <stdio.h>

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, j, minIdx, temp;

    for (i = 0; i < n - 1; i++)
    {
        minIdx = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        if (minIdx != i)
        {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

    for (int a = 0; a < n; a++)
    {
        printf(" %d ", arr[a]);
    }

    return 0;
}
