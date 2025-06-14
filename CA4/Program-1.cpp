#include <stdio.h>

int main()
{
    int i, j, row, column;

    printf("Enter The Row Of The Matrix : ");
    scanf("%d", &row);

    printf("Enter The Column Of The Matrix : ");
    scanf("%d", &column);

    int a_1[row][column], a_2[row][column], sum[row][column];

    // Matrix 1
    printf("Enter The Elements Of The First Matrix - \n");

    for (i = 0; i < row; i++)
    {
        printf("Enter The Row %d Of Matrix : ", i + 1);
        for (j = 0; j < column; j++)
            scanf("\n%d", &a_1[i][j]);
    }

    printf("The Matrix Is - \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf(" %d ", a_1[i][j]);
        }
        printf("\n");
    }

    // Matrix 2
    printf("Enter The Elements Of The Second Matrix - \n");

    for (i = 0; i < row; i++)
    {
        printf("Enter The Row %d Of Matrix : ", i + 1);
        for (j = 0; j < column; j++)
            scanf("\n%d", &a_2[i][j]);
    }

    printf("The Matrix Is - \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf(" %d ", a_2[i][j]);
        }
        printf("\n");
    }

    // Sum Of Matrix

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum[i][j] = a_1[i][j] - a_2[i][j];
        }
    }

    printf("The Sum Of The Matrix Is - \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf(" %d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
