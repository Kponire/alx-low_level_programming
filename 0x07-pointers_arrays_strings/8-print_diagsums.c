#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the square matrix
 * @size: the size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int add1 = 0;
	int add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[(size + 1) * i];
		add2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", add1, add2);
}
