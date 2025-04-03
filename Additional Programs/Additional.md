# Homework Exercises

## Exercise 1: Greatest Common Divisor

**Question:** Write a program to find the greatest common divisor of two given numbers.

**Sollution** : [View Code](GreatestCommonDivisor.cpp)

```cpp
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, i, gcd;

    printf("Enter The First Number : ");
    scanf("%d", &num1);
    printf("Enter The Second Number : ");
    scanf("%d", &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("The Greatest Common Divisor Of %d And %d Is : %d", num1, num2, gcd);

    return 0;
}
```

### OUTPUT

```cpp
Enter The First Number : 12
Enter The Second Number : 18
The Greatest Common Divisor Of 12 And 18 Is : 6
```

## Exercise 2: Pattern Print 3

**Question:** Write a program to print the following pattern.

```
  *
 ***
*****
```

**Sollution** : [View Code](PatternPrint3.cpp)

```cpp
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;

    for (i = 1; i <= 3; i++)
    {
        for (j = 3; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```
## Exercise 2: Calculator

**Question:** Write a program to make a simple calculator using switch operations.

```cpp
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
```

### OUTPUT

```cpp
Enter An Operator (+, -, *, /) : +
Enter Two Operands : 2 3
2 + 3 = 5
```