#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the source string
 * @src: bytes from memory area
 * @n: the specified index to change
 * Return: the new dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
