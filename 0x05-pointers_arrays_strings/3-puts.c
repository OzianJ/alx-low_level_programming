#include "main.h"

/**
 * _puts - entry point
 * Description:'prints string to stdout, followed by new line
 *@str: the string to be printed
 */

void _puts(char *str)
{
int a;
while (a = 0; str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
