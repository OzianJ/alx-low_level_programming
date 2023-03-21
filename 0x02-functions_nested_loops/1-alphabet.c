#include "main.h"
/**
 * print_alphabet - entry point
 * Description 'print the alphabet, followed by a new line'
 * Retuurn : 0 if successful
 */
void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
