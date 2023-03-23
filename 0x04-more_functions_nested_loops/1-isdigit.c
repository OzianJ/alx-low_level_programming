#include "main.h"
#include <stdio.h>

/**
 * _isdigit - entry point
 * Description:'check if the digit is between 0 and 9'
 *@c: digit being tested
 * Return: 1 if successful
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
