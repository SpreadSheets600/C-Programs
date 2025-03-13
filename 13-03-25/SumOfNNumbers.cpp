#include <stdio.h>
#include <conio.h>
int main()
{
    int sum = 0, i, n;

    printf("Enter The Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The Sum : %d", sum);

    return 0;
}