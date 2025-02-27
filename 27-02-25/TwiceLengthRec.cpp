#include <stdio.h>
#include <conio.h>
int main()
{
    int l, b, a, p;

    printf("Enter The Length Of Rectangle : ");
    scanf("%d", &l);

    printf("Enter The Breadth Of Rectangle : ");
    scanf("%d", &b);

    if (l == 2 * b)
    {
        p = 2 * (l + b);
        printf("Perimeter Of Rectangle : %d", p);
    }
    else
    {
        a = l * b;
        printf("Area Of Rectangle : %d", a);
    }

    return 0;
}
