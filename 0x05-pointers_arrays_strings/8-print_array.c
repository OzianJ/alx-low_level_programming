#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * Description:'print an array of n'
 *@a: pointer to the intiger
 *@n: the number of times the intiger will be printed
 */

void print_array(int *a, int n)
{
int c;

for (c = 0; c < n; c++)
{
if (c == 0)
printf("%d", a[c]);
else
printf(", %d", a[c]);
}
printf('\n');
}
