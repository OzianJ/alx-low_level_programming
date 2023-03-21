#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description 'print the alphabet 10 times'
 */
void print_alphabet_x10(void)
{
int j = 0;
while (j < 10)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
j++;
}
}
