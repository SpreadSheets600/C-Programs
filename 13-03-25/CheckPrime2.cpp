#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, isPrime = 1;

    printf("Enter The Number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i * i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d Is Not A Prime Number \n", num);
    }
    else
    {
        printf("%d Is A Prime Number \n", num);
    }

    return 0;
}