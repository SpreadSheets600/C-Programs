#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, max;
    printf("Enter The Numbers : ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    printf("Max Number Is : ", a, b, max);

    return 0;
}
