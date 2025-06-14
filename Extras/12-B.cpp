#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *src, *dest;
    int ch;

    if (argc != 3)
    {
        printf("Usage : %s <source file> <destination file>\n", argv[0]);
        return 1;
    }

    src = fopen(argv[1], "r");
    if (src == NULL)
    {
        printf("Error Openening Source File!\n");
        return 1;
    }

    dest = fopen(argv[2], "w");
    if (dest == NULL)
    {
        printf("Error Openening Destination File!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File Copied Successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}
