#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks for alphabetic character
 * @c: alphabet to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
