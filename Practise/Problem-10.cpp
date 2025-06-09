#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i;

    printf("Enter The Number To Print The Table For : ");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }

    return 0;
}
