#include <stdio.h>

#define STUDENTS 3

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[STUDENTS];

    printf("Enter Details For %d Students :\n", STUDENTS);

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name : ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll No : ");
        scanf("%d", &s[i].roll_no);

        printf("Marks : ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudents With Marks > 65 :\n");
    printf("%-10s %-10s %-10s\n", "Name", "Roll No", "Marks");

    for (int i = 0; i < STUDENTS; i++)
    {
        if (s[i].marks > 65)
        {
            printf("%-10s %-10d %-10.2f\n", s[i].name, s[i].roll_no, s[i].marks);
        }
    }

    return 0;
}
