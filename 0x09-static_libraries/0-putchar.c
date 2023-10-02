#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: program that prints _putchar,
 * followed by a new line.
 * Return: 0 indicates success
 */

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	while (*(text + i) != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
