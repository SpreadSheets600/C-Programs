#include <stdio.h>
#include <conio.h>

float power(float base, int exponent)
{
    float result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

float factorial(int number)
{
    float result = 1;
    for (int i = 2; i <= number; i++)
    {
        result *= i;
    }
    return result;
}

float sum(int num_1, int num_2, int i)
{
    if (i % 2 == 0)
        return num_1 + num_2;
    else
        return num_1 - num_2;
}

int main()
{
    int n, i;
    float x, result = 0.0;

    printf("Enter The Value Of X : ");
    scanf("%f", &x);

    printf("Enter The Number Of Terms : ");
    scanf("%d", &n);

    // x - x ^ 3 / 3! + x ^ 5 / 5! - x ^ 7 /  7! + ... n Terms
    for (i = 0; i < n; i++)
    {
        int exponent = 2 * i + 1;                              // 1, 3, 5, 7, ... Getting Odd Numbers
        float term = power(x, exponent) / factorial(exponent); // x ^ exponent / exponent!

        if (i % 2 == 0)
            result += term;
        else
            result -= term;
    }

    printf("Result : %f\n", result);

    return 0;
}
