#include <stdio.h>
#include <string.h>

int main()
{
    // Count The Number Of Words In A String
    char str[100];

    printf("Enter A String : ");
    scanf("%[^\n]s", str);

    printf("You Entered : %s", str);

    int word_count = 0;
    int str_len = strlen(str);

    for (int i = 0; i < str_len; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            word_count++;
        }
    }

    if (str_len > 0 && str[str_len - 1] != ' ' && str[str_len - 1] != '\n' && str[str_len - 1] != '\t')
    {
        word_count++;
    }

    printf("\nNumber Of Words In The String : %d", word_count);

    return 0;
}
