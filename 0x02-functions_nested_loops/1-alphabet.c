#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: prints the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
