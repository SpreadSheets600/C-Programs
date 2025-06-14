#include <stdio.h>

int main()
{
    int vowels = 0, consonants = 0, digits = 0, special_chars = 0, blank_spaces = 0, str_len;

    char str[100];

    printf("Enter A String : ");
    scanf("%[^\n]s", str);

    printf("You Entered : %s", str);

    str_len = sizeof(str) / sizeof(str[0]);
    printf("\nLength of String : %d", str_len);

    for (int i = 0; i < str_len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') &&
                                                         !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                                                           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            consonants++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            blank_spaces++;
        }
        else
        {
            special_chars++;
        }
    }

    printf("\nVowels : %d", vowels);
    printf("\nDigits : %d", digits);
    printf("\nConsonants : %d", consonants);
    printf("\nBlank Spaces : %d", blank_spaces);
    printf("\nSpecial Characters : %d", special_chars);
}
