#include <stdio.h>
#include <conio.h>
int main()
{
    float r, a, p;
    printf("Enter The Radius Of Circle : ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("Area Of Circle : %f \n", a);
    printf("Perimeter Of Circle : %f", p);
    return 0;
}
