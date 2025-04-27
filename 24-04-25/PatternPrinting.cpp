#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 3; j > i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
