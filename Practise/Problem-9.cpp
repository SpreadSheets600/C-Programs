#include <stdio.h>
#include <conio.h>

int main()
{
    // While Loop

    int a = 0;

    while (a < 10)
    {
        printf("While %d\n", a);
        a++;
    }

    // Do While Loop

    a = 0;

    do
    {
        printf("Do %d\n", a);
        a++;
    } while (a < 10);

    // For Loop

    for (a = 0; a < 10; a++)
    {
        printf("For %d\n", a);
    }

    return 0;
}
