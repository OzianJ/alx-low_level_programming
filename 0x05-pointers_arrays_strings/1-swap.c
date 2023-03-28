#include "main.h"

/**
 * swap_int - entry point
 * Description:'swap the value of two intigers'
 *@a: the first intiger
 *@b: the second intiger
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
