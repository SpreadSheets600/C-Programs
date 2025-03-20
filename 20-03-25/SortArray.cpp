#include <stdio.h>
#include <conio.h>
int main()
{
    int i, size = 0;
    int a[size] = {};

    printf("Enter The Size Of The Array : ");
    scanf("%d", &size);

    printf("Enter The Elements Of The Array : ");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    // Implementing Bubble Sort
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                // Swapping Elements
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("Sorted Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}