#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks[3];
    float totalMarks;
    float percentage;
    char grade;
};

void calculateGrade(struct Student *student)
{
    student->totalMarks = 0;
    for (int i = 0; i < 3; i++)
    {
        student->totalMarks += student->marks[i];
    }
    student->percentage = (student->totalMarks / 300) * 100;

    if (student->percentage >= 80)
    {
        student->grade = 'A';
    }
    else if (student->percentage >= 50)
    {
        student->grade = 'B';
    }
    else
    {
        student->grade = 'C';
    }
}

int main()
{
    struct Student students[5];

    printf("Enter Studet Details -\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n-- Student %d : --\n", i + 1);

        printf("Enter Roll No : ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name : ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Marks For 3 Subjects : ");

        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &students[i].marks[j]);
        }

        calculateGrade(&students[i]);
    }

    printf("\n-- Progress Report --\n");

    printf("Roll No\tName\t\tTotal Marks\tPercentage\tGrade\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t\t%.2f\t\t%.2f\t\t%c\n", students[i].rollNo, students[i].name, students[i].totalMarks, students[i].percentage, students[i].grade);
    }

    return 0;
}