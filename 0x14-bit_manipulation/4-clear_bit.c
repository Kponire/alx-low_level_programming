#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the input bit
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int peak;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	peak = 1;
	peak = peak << index;
	peak = ~peak;
	*n = *n & peak;
	return (1);
}
