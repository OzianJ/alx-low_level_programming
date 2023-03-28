#include "main.h"

/**
 * puts_half - entry point
 * Description:'print half of the string'
 *@str: pointer to the string to be printed
 */
void puts_half(char *str)
{
int a, b, e;
a = 0;

while (str[a] != '\0')
{
a++;
}
if (a % 2 == 0)
{
for (e = a / 2; str[e] != 0; e++)
{
_putchar(str[e]);
}
}
else if (a % 2)
{
for (b = (a - 1) / 2; b < a - 1; b++)
{
_putchar(str[b + 1]);
}
}
{
_putchar('\n');
}
}
