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

    for (i = 0; i < size; i++)
        printf("%d\n", a[i]);

    return 0;
}