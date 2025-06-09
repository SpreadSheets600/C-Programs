#include <stdio.h>
#include <conio.h>

struct employee
{
    int id;
    float sal;
    char name[100];
};

int main()
{
    struct employee e1;

    printf("Enter The Valur Of Employee ID : \n");
    scanf("%d", &e1.id);

    printf("Enter The Valur Of Employee Salary : \n");
    scanf("%f", &e1.sal);

    printf("Enter The Valur Of Employee name : \n");
    scanf(" %[^\n]s", e1.name);

    printf("%d %f %s", e1.id, e1.sal, e1.name);

    return 0;
}
