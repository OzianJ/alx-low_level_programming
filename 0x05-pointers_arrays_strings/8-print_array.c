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
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
