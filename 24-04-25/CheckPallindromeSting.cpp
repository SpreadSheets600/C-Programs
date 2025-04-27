#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 0;

    printf("Enter The String : ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%s Is Not Palindrome", str);
    else
        printf("%s Is Palindrome", str);

    return 0;
}