#include <stdio.h>

int main()
{
    FILE *infile = fopen("TestProgram.c", "r");
    FILE *outfile = fopen("CleanTestProgram.c", "w");

    if (infile == NULL || outfile == NULL)
    {
        printf("Error Opening File!\n");
        return 1;
    }

    int ch, next;
    int in_string = 0;

    while ((ch = fgetc(infile)) != EOF)
    {

        if (ch == '"' || ch == '\'')
        {
            fputc(ch, outfile);
            in_string = ch;
            while ((next = fgetc(infile)) != EOF)
            {
                fputc(next, outfile);
                if (next == '\\')
                {
                    int esc = fgetc(infile);
                    fputc(esc, outfile);
                }
                else if (next == in_string)
                {
                    break;
                }
            }
            continue;
        }

        if (ch == '/')
        {
            next = fgetc(infile);
            if (next == '/')
            {
                while ((ch = fgetc(infile)) != EOF && ch != '\n')
                    ;
                fputc('\n', outfile);
            }
            else if (next == '*')
            {
                int prev = 0;
                while ((ch = fgetc(infile)) != EOF)
                {
                    if (prev == '*' && ch == '/')
                        break;
                    prev = ch;
                }
            }
            else
            {
                fputc(ch, outfile);
                fputc(next, outfile);
            }
        }
        else
        {
            fputc(ch, outfile);
        }
    }

    fclose(infile);
    fclose(outfile);

    printf("Comments Removed Successfully!\n");
    return 0;
}
