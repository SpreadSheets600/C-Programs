#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, temp;

    printf("Enter The Value Of A : ");
    scanf("%d", &a);
    printf("Enter The Value Of B : ");
    scanf("%d", &b);

    printf("Before Swapping : \n");
    printf("A = %d \n", a);
    printf("B = %d \n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping : \n");
    printf("A = %d \n", a);
    printf("B = %d \n", b);

    return 0;
}
