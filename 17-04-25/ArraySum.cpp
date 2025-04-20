#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    printf("Enter The Number Of Elements : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter %d Integers :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
        sum += *(arr + i);
    }

    printf("Sum Of All Elements = %d\n", sum);

    free(arr);

    return 0;
}
