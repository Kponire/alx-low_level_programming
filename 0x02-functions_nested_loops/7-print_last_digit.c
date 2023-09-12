#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number.
 * @x: input number
 * Return: last digit
 */

int print_last_digit(int x)
{
	int i = abs(x % 10);

	_putchar('0' + i);
	return (i);
}
