#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reversed[100];

    printf("Enter A String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;
    printf("You Entered : %s\n", str);

    int len = strlen(str);
    int start = 0, end = 0, j = 0;

    while (end <= len)
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            for (int i = end - 1; i >= start; i--)
            {
                reversed[j++] = str[i];
            }
            if (str[end] == ' ')
            {
                reversed[j++] = ' ';
            }
            start = end + 1;
        }
        end++;
    }

    reversed[j] = '\0';
    printf("Reversed String : %s\n", reversed);

    return 0;
}
