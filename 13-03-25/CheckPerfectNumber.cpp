#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, sum = 0;

    printf("Enter The Number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d Is A Perfect Number \n", num);
    }
    else
    {
        for (i = 1; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
    }

    if (sum == num)
    {
        printf("%d Is A Perfect Number \n", num);
    }
    else
    {
        printf("%d Is Not A Perfect Number \n", num);
    }

    return 0;
}