#include "main.h"

/**
 * print_diagonal - diagonal line
 * Description: draws a diagonal line on the terminal.
 * @n: the input integer
 * Return: 0 indicates success
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
