#include "main.h"

/**
 * times_table - Entry point
 * Return: multiples of 9
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar('0' + b);
			}
			else if ((a * b) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (a * b) / 10);
				_putchar('0' + (a * b) % 10);
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
