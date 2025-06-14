#include <stdio.h>

#define STUDENTS 5

struct Student
{
    int roll_no;
    char name[50];
    float marks[3];
    float total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s[STUDENTS];

    printf("Enter Details For %d Students :\n", STUDENTS);

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : ");
        scanf("%d", &s[i].roll_no);

        printf("Name : ");
        scanf(" %[^\n]", s[i].name);

        s[i].total = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Marks Of Subject %d : ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0;

        if (s[i].percentage >= 80)
            s[i].grade = 'A';
        else if (s[i].percentage >= 50)
            s[i].grade = 'B';
        else
            s[i].grade = 'C';
    }

    printf("\n%-10s %-20s %-10s %-10s %-10s %-10s %-12s %-6s\n",
           "Roll No", "Name", "Sub1", "Sub2", "Sub3", "Total", "Percentage", "Grade");

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%-10d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-12.2f %-6c\n",
               s[i].roll_no, s[i].name,
               s[i].marks[0], s[i].marks[1], s[i].marks[2],
               s[i].total, s[i].percentage, s[i].grade);
    }

    return 0;
}
