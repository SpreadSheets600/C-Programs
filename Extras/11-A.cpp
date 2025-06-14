#include <stdio.h>

int main()
{
    FILE *file = fopen("Data.txt", "w");
    if (file == NULL)
    {
        printf("Error Opening File!\n");
        return 1;
    }
    fprintf(file, "Hello World!\n");
    fclose(file);

    return 0;
}
