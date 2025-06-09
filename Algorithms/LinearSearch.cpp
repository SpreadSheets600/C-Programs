#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[100] = {1, 5, 2, 9, 10, 19, 10, 19, 100};
    int key = 10;

    int arr_len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= arr_len; i++)
    {
        if (arr[i] == key)
        {
            printf("Element Found At %d\n", i);
        }
    }

    return 0;
}
