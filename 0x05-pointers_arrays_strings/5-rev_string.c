#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the input string
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char str;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length--)
	{
		str = s[i];
		s[i++] = s[length];
		s[length] = str;
	}
}
