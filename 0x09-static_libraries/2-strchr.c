#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the source string
 * @c: the checked character
 * Return: first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
