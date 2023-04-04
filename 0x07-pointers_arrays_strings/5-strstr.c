#include "main.h"

/**
* _strstr - Entry Point
*description:'locates a substring'
* @haystack: char array
* @needle: char array
* Return: array
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *abcde = haystack;
while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
{
needle++;
haystack++;
}
if (!*needle != '\0')
{
return (abcde);
}
haystack++;
}
return (0);
}
