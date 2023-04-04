#include "main.h"
#include <stdio.h>

/**
* print_diagsums - sum of the two diagonals
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
int w = 0;
int x = 0;
int y = 0;
while (w < size)
{
x += a[w * (size + 1)];
y += a[(w + 1) * (size - 1)];
w++;
}
printf("%d, ", x);
printf("%d", y);
printf("\n");
}
