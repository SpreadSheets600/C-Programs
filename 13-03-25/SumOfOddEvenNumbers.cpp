#include <stdio.h>
#include <conio.h>
int main()
{
    int sum_odd = 0, sum_even = 0, i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + i;
        }
        else
        {
            sum_odd = sum_odd + i;
        }
    }
    printf("The Odd Sum : %d \n", sum_odd);
    printf("The Even Sum : %d", sum_even);

    return 0;
}