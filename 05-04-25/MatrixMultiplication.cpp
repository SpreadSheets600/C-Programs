#include <stdio.h>
int main()
{
    int row, column, i, j, k;

    printf("Enter The Number Of Rows :  ");
    scanf("%d", &row);

    printf("Enter The Number Of Columns :  ");
    scanf("%d", &column);

    int a_1[row][column], a_2[row][column], product[row][column];

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

    // Matrix Multiplication
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            product[i][j] = 0;           // Initialize The Product Matrix To Be 0
            for (k = 0; k < column; k++) // Iterating The Column
            {
                {
                    product[i][j] += a_1[i][k] * a_2[k][j];
                }
            }
        }

        printf("The Product Of The Matrix Is - \n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf(" %d ", product[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
