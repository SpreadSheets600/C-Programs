#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, row_1, row_2, column_1, column_2;

    printf("Enter The Row Of The Matrix 1 : ");
    scanf("%d", &row_1);

    printf("Enter The Column Of The Matrix 1 : ");
    scanf("%d", &column_1);

    printf("Enter The Row Of The Matrix 2 : ");
    scanf("%d", &row_2);

    printf("Enter The Column Of The Matrix 2 : ");
    scanf("%d", &column_2);

    if (row_1 != row_2 || column_1 != column_2)
    {
        printf("Matrix Substraction Not Possible!\n");
        return 0;
    }
    else
    {
        printf("Matrix Substraction Is Possible!\n");
    }

    int a_1[row_1][column_1], a_2[row_2][column_2], diff[row_1][column_1];

    // Matrix 1
    printf("Enter The Elements Of The First Matrix - \n");

    for (i = 0; i < row_1; i++)
    {
        printf("Enter The Row %d Of Matrix : ", i + 1);
        for (j = 0; j < column_1; j++)
            scanf("\n%d", &a_1[i][j]);
    }

    printf("The Matrix Is - \n");
    for (i = 0; i < row_1; i++)
    {
        for (j = 0; j < column_1; j++)
        {
            printf(" %d ", a_1[i][j]);
        }
        printf("\n");
    }

    // Matrix 2
    printf("Enter The Elements Of The Second Matrix - \n");

    for (i = 0; i < row_2; i++)
    {
        printf("Enter The Row %d Of Matrix : ", i + 1);
        for (j = 0; j < column_2; j++)
            scanf("\n%d", &a_2[i][j]);
    }

    printf("The Matrix Is - \n");
    for (i = 0; i < row_1; i++)
    {
        for (j = 0; j < column_2; j++)
        {
            printf(" %d ", a_2[i][j]);
        }
        printf("\n");
    }

    // Difference Of Matrix

    for (i = 0; i < row_1; i++)
    {
        for (j = 0; j < column_1; j++)
        {
            diff[i][j] = a_1[i][j] - a_2[i][j];
        }
    }

    printf("The Difference Of The Matrix Is - \n");
    for (i = 0; i < row_1; i++)
    {
        for (j = 0; j < column_1; j++)
        {
            printf(" %d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}