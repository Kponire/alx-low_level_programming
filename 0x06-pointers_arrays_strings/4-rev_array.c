#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array element
 * @n: the number of element
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int k;

	for (; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = a[j];
			a[j] = a[j - 1];
			a[j - 1] = k;
		}
	}
}
