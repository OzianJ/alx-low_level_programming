#include "main.h"
/**
 * _isalpha - entry point
 * Description 'check wether the character is an alphabet'
 *@c: character to be tested
 * Return: 1 if successful
 * return: Always 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
