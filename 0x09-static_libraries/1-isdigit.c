#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digits
 * Description: function that checks for a digit (0 through 9).
 * @c: the input character
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
