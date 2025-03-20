#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, row, column;
    
    printf("Enter The Row Of The Matrix : ");
    scanf("%d", &row);

    printf("Enter The Column Of The Matrix : ");
    scanf("%d", &column);
    
    int a[row][column];

    for (i = 0; i < row; i++)
    {
        printf("Enter The Row %d Of Matrix : ", i + 1);
        for (j = 0; j < column; j++)
            scanf("\n%d", &a[i][j]);
    }

    printf("The Matrix Is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}