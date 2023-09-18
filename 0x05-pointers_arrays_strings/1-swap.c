#include "main.h"

/**
 * swap_int - swap function
 * Description: swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int x = *b;
	*b = *a;
	*a = x;
}
