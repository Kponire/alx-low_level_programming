#include "main.h"

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number in integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len -1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result +=base;
		base *= 2;
		len--;
	}
	return (result);
}
