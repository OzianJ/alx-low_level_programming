#include <stdio.h>

/**
 * main - entry point
 * description - prints the alphabets in lower case
 *Return: 0 if Successful
 */

int main(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
