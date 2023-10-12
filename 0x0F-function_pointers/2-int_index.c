#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: the array of numbers to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	while (i < size)
	{
		if ((*cmp) (array[i]))
			return (i);
		i++;
	}
	return (-1);
}
