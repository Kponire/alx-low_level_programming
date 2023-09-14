#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: prints the numbers, from 0 to 9
 * followed by a new line.
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}

		i++;
	}
	_putchar('\n');
}
