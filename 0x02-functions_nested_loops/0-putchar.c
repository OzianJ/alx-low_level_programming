#include "main.h"
/**
 * main - entry point
 * Descriptions 'This will print _putchar followed by space'
 * Return: 0 if sucessful
 */
int main(void)
{
char p[] = "_putchar";
int j;
for (j = 0; j < 8; j++)
{
_putchar(p[j]);
}
_putchar('\n');
return (0);
}
