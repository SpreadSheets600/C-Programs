#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[3];

    printf("Enter Student Details -\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n-- Student %d : --\n", i + 1);

        printf("Enter Roll No : ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name : ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Marks : ");
        scanf("%f", &students[i].marks);
    }

    printf("\n-- Students With Marks > 65 --\n");
    printf("Roll No\tName\t\tMarks\n");
    for (int i = 0; i < 3; i++)
    {
        if (students[i].marks > 65)
        {
            printf("%d\t%s\t\t%.2f\n", students[i].rollNo, students[i].name, students[i].marks);
        }
    }

    return 0;
}