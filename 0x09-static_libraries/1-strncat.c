#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: the string destination
 * @src: the string source
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
