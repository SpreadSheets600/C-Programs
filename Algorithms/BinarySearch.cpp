#include <stdio.h>

int main()
{
    // Sorted Array Required For Binary Search
    int arr[] = {1, 2, 5, 9, 10, 10, 19, 19, 100};
    int key = 10;

    int start = 0;
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int end = arr_len - 1;

    int found = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            printf("Element Found At %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (!found)
    {
        printf("Element Not Found In Array\n");
    }

    return 0;
}
