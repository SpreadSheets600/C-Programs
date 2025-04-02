#include <stdio.h>
#include <conio.h>

int square(int number, int times)
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
    int num, times;

    printf("Enter A Number : ");
    scanf("%d", &num);

    printf("Enter The Number Of Times To Multiply : ");
    scanf("%d", &times);

    int result = square(num, times);
    printf("The Result Is : %d", result);

    return 0;
}