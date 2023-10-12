#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(list, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
