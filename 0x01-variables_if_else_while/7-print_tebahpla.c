#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 indicates success
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
