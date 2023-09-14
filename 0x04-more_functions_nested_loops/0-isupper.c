#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase
 * Description: function that checks for uppercase character.
 * @c: The input character
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
