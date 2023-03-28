#include "main.h"

/**
 * _strlen - entry point
 * Descriptio:'returns length of the string
 *@s: the string to be checked
 * Return: always 0
 */
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
