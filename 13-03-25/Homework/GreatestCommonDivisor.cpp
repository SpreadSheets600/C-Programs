#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, i, gcd;

    printf("Enter The First Number : ");
    scanf("%d", &num1);
    printf("Enter The Second Number : ");
    scanf("%d", &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("The Greatest Common Divisor Of %d And %d Is : %d", num1, num2, gcd);

    return 0;
}
