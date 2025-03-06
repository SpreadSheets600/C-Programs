#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("The Maximum Number Is : %d", a);
    else if (b > a && b > c)
        printf("The Maximum Number Is : %d", b);
    else
        printf("The Maximum Number Is : %d", c);
        
    return 0;
}
