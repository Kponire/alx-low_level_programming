#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the source string
 * @b: the constant byte
 * @n: the specified index to change
 * Return: the new string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
