#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
		alphabet = 'a';
	}
}
