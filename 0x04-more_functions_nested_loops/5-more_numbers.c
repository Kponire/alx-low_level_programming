#include "main.h"

/**
   * more_numbers - print numbers from 0 to 14
   * Description: prints 10 times the numbers, from 0 to 14
   * Return: 0 indicates success
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
