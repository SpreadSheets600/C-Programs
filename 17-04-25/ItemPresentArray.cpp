#include <stdio.h>

int lin_srch(int *arr, int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == item)
        {
            return i; // Item Found At Index i
        }
    }
    return -1; // Item Not Found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int item = 30;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = lin_srch(arr, size, item);

    if (result != -1)
        printf("Item %d Found At Index %d.\n", item, result);
    else
        printf("Item %d Not Found In The Array.\n", item);

    return 0;
}
