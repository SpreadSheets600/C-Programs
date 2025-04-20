#include <stdio.h>

void removeChar(char *str, char target)
{
    char *src = str;  // Read Pointer
    char *dest = str; // Write Pointer

    while (*src != '\0')
    {
        if (*src != target)
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char str[100] = "Hello, World!";
    char ch = 'l';

    printf("Original String : %s\n", str);
    removeChar(str, ch);
    printf("String After Removing '%c': %s\n", ch, str);

    return 0;
}
