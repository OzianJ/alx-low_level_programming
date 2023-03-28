#include "main.h"

/**
 * *_strcpy - entry point
 *@dest: pointer to the destination
 *@src: pointer to the string to be copied
 * Return: 0 always
 */

char *_strcpy(char *dest, char *src)
{
int a, b;
a = 0;
while (src[a] != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
dest[b] = src[b];
}
dest[b] = '\0';
return (dest);
}
