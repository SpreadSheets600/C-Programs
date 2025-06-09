#include <stdio.h>
#include <conio.h>

int main()
{
    // Hardcoded Values

    int length, breadth;

    length = 10;
    breadth = 10;

    printf("The Area Of The Rectangle Is : %d\n", length * breadth);

    // User Input

    int len, bre;

    printf("Enter The Value Of Length : ");
    scanf("%d", &len);
    printf("Enter The Value Of Breadth : ");
    scanf("%d", &bre);

    printf("The Area Of The Rectangle Is : %d", len * bre);

    return 0;
}
