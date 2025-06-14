#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0, l = 0;
    char str[100];

    printf("Enter A String: ");
    fgets(str, sizeof(str), stdin);

    l = strlen(str);
    for (i = l - 1; i >= 0; i--)
    {
        j++;
        if (str[i] == ' ')
        {
            break;
        }
    }
    printf("%c.", str[0]);
    for (i = 1; i < (l - j); i++)
    {
        if (str[i] == ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }
    for (i = (l - j + 1); i < l; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
