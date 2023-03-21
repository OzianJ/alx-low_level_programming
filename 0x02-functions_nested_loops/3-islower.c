#include "main.h"
/**
 * _islower- entry point
 * Description:'check if the character is lowercase'
 *@c: alphabet being tesed
 * Return: 1 if successful
 *return: always 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
