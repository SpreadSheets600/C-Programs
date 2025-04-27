#include <stdio.h>
int main()
{
    int row1, col1, row2, col2, i, j, k;

    printf("Enter The Number Of Rows for First Matrix :  ");
    scanf("%d", &row1);

    printf("Enter The Number Of Columns for First Matrix :  ");
    scanf("%d", &col1);

    printf("Enter The Number Of Rows for Second Matrix :  ");
    scanf("%d", &row2);

    printf("Enter The Number Of Columns for Second Matrix :  ");
    scanf("%d", &col2);

    if (row1 != col2)
    {
        printf("Matrix Multiplication Is Not Possible\n");
        return 0;
    }
    else if (col1 != row2)
    {
        printf("Matrix Multiplication Is Not Possible\n");
        return 0;
    }
    else
    {

        printf("Matrix Multiplication Is Possible\n");

        int a_1[row1][col1], a_2[row2][col2], product[row1][col2];

        printf("Enter The Elements Of The First Matrix - \n");

        for (i = 0; i < row1; i++)
        {
            printf("Enter The Row %d Of Matrix : ", i + 1);
            for (j = 0; j < col1; j++)
                scanf("\n%d", &a_1[i][j]);
        }

        printf("The First Matrix Is - \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf(" %d ", a_1[i][j]);
            }
            printf("\n");
        }

        // Matrix 2
        printf("Enter The Elements Of The Second Matrix - \n");

        for (i = 0; i < row2; i++)
        {
            printf("Enter The Row %d Of Matrix : ", i + 1);
            for (j = 0; j < col2; j++)
                scanf("\n%d", &a_2[i][j]);
        }

        printf("The Second Matrix Is - \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf(" %d ", a_2[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                product[i][j] = 0;
                for (k = 0; k < col1; k++)
                {
                    product[i][j] += a_1[i][k] * a_2[k][j];
                }
            }
        }

        printf("The Product Of The Matrix Is - \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf(" %d ", product[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
}