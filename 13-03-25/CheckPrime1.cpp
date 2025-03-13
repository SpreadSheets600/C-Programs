#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, count = 0;

    printf("Enter The Number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d Is Not A Prime Number \n", num);
    }
    else
    {
        for (i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                count = count + 1;
            }
        }
    }

    if (count > 1)
    {
        printf("%d Is Not A Prime Number \n", num);
    }
    else
    {
        printf("%d Is A Prime Number \n", num);
    }

    return 0;
}