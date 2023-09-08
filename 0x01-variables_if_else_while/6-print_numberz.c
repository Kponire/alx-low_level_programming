#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: 0 indicates success
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(48 + digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
