#include "main.h"

/**
 * rev_string - entry point
 * Description:'print the string in reverse order'
 *@s: the string to be reversed
 */

void rev_string(char *s)
{

int a, b, c;
char xyz;

b = 0;
c = 0;

while (s[b] != '\0')
{
b++;
}

c = b - 1;

for (a = 0; a < b / 2; a++)
{
xyz = s[a];
s[a] = s[c];
s[c--] = xyz;
}
}
