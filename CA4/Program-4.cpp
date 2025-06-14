#include <stdio.h>

void fib(int n, int prev1, int prev2)
{
    if (n < 3)
    {
        return;
    }

    int curr = prev1 + prev2;
    printf("%d ", curr);

    return fib(n - 1, prev2, curr);
}

void printFib(int n)
{

    if (n < 1)
    {
        printf("Invalid Number Of Terms\n");
    }

    else if (n == 1)
    {
        printf("%d ", 0);
    }

    else if (n == 2)
    {
        printf("%d %d", 0, 1);
    }

    else
    {
        printf("%d %d ", 0, 1);
        fib(n, 0, 1);
    }
    return;
}

int main()
{
    int n;

    printf("Enter The Number : ");
    scanf("%d", &n);

    printFib(n);

    return 0;
}
