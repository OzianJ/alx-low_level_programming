#include "main.h"

/**
 * _puts - entry point
 * Description:'prints string to stdout, followed by new line
 *@str: the string to be printed
 */

void _puts(char *str)
{
int a;
for (a = 0, str[a] != '\0', a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
