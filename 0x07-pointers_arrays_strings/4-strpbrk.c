#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the source string
 * @accept: the string to be searched
 * Return:  a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; s[j]; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (accept[i] == '\0')
			return (s + j);
	}
	return (0);
}
