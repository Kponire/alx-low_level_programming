#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of parameters passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
