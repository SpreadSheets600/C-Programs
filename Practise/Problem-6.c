#include <stdio.h>

int main()
{
    int a;

    printf("Enter A Number : ");
    scanf("%d", &a);

    if (a % 97 == 0)
    {
        printf("%d Divisible By 97\n", a);
    }
    else
    {
        printf("%d Nah Dude\n", a);
    }

    int b;

    b = 3.0 / 8 - 2;

    printf("%f\n", 3.0 / 8 - 2);
    printf("%d", b);

    return 0;
}
