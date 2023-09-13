#include <stdio.h>
#include "main.h"

void putchar_many(int);

/**
 * print_times_table - Entry point
 * Description: prints the n times table, starting with 0
 * @n: input number to produce the multiplication tabke
 */
void print_times_table(int n)
{
	if (n >=  0 && n <= 15)
	{
		int a;
		int b;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
					putchar(b + '0');
				else if ((a * b) < 10)
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar((a * b) % 10 + '0');
				}

				else if ((a * b) < 100)
				{
					putchar(' ');
					putchar(' ');
					putchar((a * b) / 10 + '0');
					putchar((a * b) % 10 + '0');
				}
				else
				{
					putchar(' ');
					putchar_many(a * b);
				}

				if (b != n)
					putchar(',');
			}
			putchar('\n');
		}
	}
}

/**
 * putchar_many - Entry point
 * @x: input number for more than two digits
 */
void putchar_many(int x)
{
	if (x < 0)
	{
		putchar('-');
		x = -x;
	}

	if (x / 10)
		putchar_many(x / 10);

	putchar(x % 10 + '0');
}
