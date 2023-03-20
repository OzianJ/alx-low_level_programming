#include <stdio.h>

/**
 * main - entry point
 * description - prints the alphabets in lower except for 'e' and 'q'
 *Return: 0 if Successful
 */
int main(void)
{
    char ch = 'a';
    while (ch <= 'z')
    {
        if (ch != 'e' && ch != 'q')
        {
            putchar(ch);
        }
        ch++;
    }
        putchar('\n');
        return (0);
    }
