#include "main.h"

/**
 * puts2 - entry point
 * Descriptions:'print every character forllowed by new line'
 *@str: pointer to the character to be printed
 */

void puts2(char *str)
{
int a, b;
a = 0;

while (str[a] != '\0')
{
a++;
}
for (b = 0; b < a; b += 2)
{
_putchar(str[b]);
}
_putchar('\n');
}
