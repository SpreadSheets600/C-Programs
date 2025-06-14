#include <stdio.h>

int main()
{
    int count = 0;

    FILE *file = fopen("Data.txt", "r");
    if (file == NULL)
    {
        printf("Error Opening File!\n");
        return 1;
    }

    // Count No Of Words
    char word[100];

    while (
        fscanf(file, "%s", word) == 1)
    {
        count++;
        }
    fclose(file);
    printf("No Of Words : %d\n", count);

    return 0;
}
