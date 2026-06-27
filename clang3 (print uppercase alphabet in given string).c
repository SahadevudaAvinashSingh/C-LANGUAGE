//program to print uppercase alphabets in given string
#include <stdio.h>

void main()
{
    char str[] = "Hello Good Morning To All Of You.";
    int i;
    printf("Uppercase characters in the string: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            printf("%c ", str[i]);
        }
    }
}
