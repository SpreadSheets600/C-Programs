#include <stdio.h>
#include <conio.h>

int power(int number, int times)
{
    int i, result = 1;

    for (i = 0; i < times; i++)
    {
        result = result * number;
    }

    return result;
}

int main()
{
    int num, times, sum = 0, digit, temp;

    printf("Enter A Number : ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + power(digit, 3);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d Is An Armstrong Number\n", num);
    else
        printf("%d Is Not An Armstrong Number\n", num);

    return 0;
}