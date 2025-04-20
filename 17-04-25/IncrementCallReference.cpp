#include <stdio.h>
#include <conio.h>

void incrementByFive(int *a, int *b);

int main()
{
    int num1 = 10, num2 = 20;

    printf("Before Increment:\n");
    printf("Number 1 = %d, Number 2 = %d\n", num1, num2);

    incrementByFive(&num1, &num2);

    printf("\nAfter Increment:\n");
    printf("Number 1 = %d, Number 2 = %d\n", num1, num2);

    return 0;
}

void incrementByFive(int *a, int *b)
{
    *a += 5;
    *b += 5;
}
