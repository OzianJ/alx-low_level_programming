#include "main.h"

/**
 * _memset - entry point
 * Description:'fills memory with a constant byte"
 *@s: pointer to first value
 *@b: second value
 *@n: thirth value
 *
 * Return: char with result of memset
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
