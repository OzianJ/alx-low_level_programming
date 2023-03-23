#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description:'check if the character is uppercase'
 *@c: alphabet being tesed
 * Return: 1 if successful
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
