#include <stdio.h>

int main()
{
    char Operator;
    int First, Second;

    printf("Enter An Operator ( +, -, *, / ) : ");
    scanf("%c", &Operator);

    printf("Enter Two Operands : ");
    scanf("%d %d", &First, &Second);

    switch (Operator)
    {
    case '+':
        printf("%d + %d = %d", First, Second, First + Second);
        break;

    case '-':
        printf("%d - %d = %d", First, Second, First - Second);
        break;

    case '*':
        printf("%d * %d = %d", First, Second, First * Second);
        break;

    case '/':
        printf("%d / %d = %d", First, Second, First / Second);
        break;

    default:
        printf("Error! Operator Is Not Correct");
    }

    return 0;
}
