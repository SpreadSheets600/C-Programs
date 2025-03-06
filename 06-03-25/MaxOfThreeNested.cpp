#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("The Maximum Number Is : %d", a);
        else
            printf("The Maximum Number Is : %d", c);
    }
    else
    {
        if (b > c)
            printf("The Maximum Number Is : %d", b);
        else
            printf("The Maximum Number Is : %d", c);
    }

    return 0;
}
