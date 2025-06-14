#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1024

int is_blank_line(const char *line)
{
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)line[i]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    FILE *infile = fopen("Data.txt", "r");
    FILE *outfile = fopen("TempData.txt", "w");

    if (infile == NULL || outfile == NULL)
    {
        printf("Error Opening File!\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), infile))
    {
        if (!is_blank_line(line))
        {
            fputs(line, outfile);
        }
    }

    fclose(infile);
    fclose(outfile);

    remove("Data.txt");
    rename("TempData.txt", "Data.txt");

    printf("Blank Lines Removed!\n");
    return 0;
}
