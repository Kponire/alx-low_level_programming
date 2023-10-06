#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: the miniminum value of the array
 * @max: the maximum value of the array
 * Return: the created integer array
 */

int *array_range(int min, int max)
{
	int i;
	int *range;
	int value = min;

	if (min > max)
		return (NULL);
	range = (int *)malloc((max - min + 1) * sizeof(int));
	if (!range)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		range[i] = value++;
	return (range);
}
