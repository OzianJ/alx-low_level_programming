#include "main.h"
/**
 * _islower 'check if the character is lowercase'
 * Return : 0 if successful
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
