#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, max;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
    printf("The Maximum Number Is : %d", max);

    return 0;
}
