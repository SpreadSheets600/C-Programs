#include <stdio.h>
#include <conio.h>
int main()
{
    int subjuect1, subject2;

    printf("Enter The Marks Of Subject 1 : ");
    scanf("%d", &subjuect1);
    printf("Enter The Marks Of Subject 2 : ");
    scanf("%d", &subject2);

    int total = subjuect1 + subject2;
    float average = total / 2.0;

    printf("Total Marks : %d \n", total);
    printf("Average Marks : %f", average);

    return 0;
}
