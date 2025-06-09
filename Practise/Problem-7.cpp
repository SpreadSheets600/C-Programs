// Swtich Case Calculator
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    char c;

    printf("Enter Number 1 : ");
    scanf("%d", &a);
    printf("Enter Number 2 : ");
    scanf("%d", &b);

    printf("Enter Operation : ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '*':
        printf("%d", a * b);
        break;

    case '/':
        printf("%d", a / b);
        break;

    default:
        printf("Fuck Off");
        break;
    }

    return 0;
}
