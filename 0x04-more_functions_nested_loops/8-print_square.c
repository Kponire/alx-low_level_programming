#include "main.h"

/**
 * print_square - prints a square
 * Description: prints a square, followed by a new line.
 * @size: the input integer
 * Return: 0 indicates success
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
