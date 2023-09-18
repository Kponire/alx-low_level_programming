#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the input string
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length--;
	for (; i <= length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
