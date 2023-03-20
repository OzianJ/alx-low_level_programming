#include <stdio.h>

/**
 * main - entry point
 * description - prints the alphabets in lower case in reverse order
 *Return: Always 0 (Success)
 */
int main(void)
{
    char ch;
    
    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
