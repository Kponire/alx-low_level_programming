#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: the input string
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i <= length)
	{
		length--;
		_putchar(s[length]);
	}
	_putchar('\n');
}
